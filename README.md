## Docker execution instructions:
- Build [c-local-dev](https://github.com/eduinlight/docker-local-dev/tree/master/c%2B%2B-local-dev) image
- Start containers `docker compose up -d`
- Enter to server container `cd server` and run `make docker`
- Enter to client container in another terminal `cd client` and run `make docker`

### Create external docker network
```BASH
docker network create c-socket-server --subnet=10.5.0.0/16
```
### Client and server execution inside containers
```BASH
make clean
make configure
make build
make run
```
