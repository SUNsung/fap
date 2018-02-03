
        
                    if args.check_status or downloader:
                exit_status = get_exit_status(
                    http_status=response.status_code,
                    follow=args.follow
                )
                if not env.stdout_isatty and exit_status != ExitStatus.OK:
                    log_error(
                        'HTTP %s %s', response.raw.status, response.raw.reason,
                        level='warning'
                    )
    
        # 128+2 SIGINT <http://www.tldp.org/LDP/abs/html/exitcodes.html>
    ERROR_CTRL_C = 130