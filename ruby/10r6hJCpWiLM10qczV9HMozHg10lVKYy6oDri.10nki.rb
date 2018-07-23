
        
            log = StringIO.new
    @dry_run_started_at = Time.zone.now
    @dry_run_logger = Logger.new(log).tap { |logger|
      logger.formatter = proc { |severity, datetime, progname, message|
        elapsed_time = '%02d:%02d:%02d' % 2.times.inject([datetime - @dry_run_started_at]) { |(x, *xs)|
          [*x.divmod(60), *xs]
        }
    }
    }
    
          if status.is_a? Symbol
        pod.status = Pod::CURL_ERROR_MAP.fetch(status, :unknown_error)
        pod.error = 'FederationError: #{status}'
      elsif status >= 200 && status < 300
        pod.status = :no_errors unless Pod.statuses[pod.status] == Pod.statuses[:version_failed]
      else
        pod.status = :http_failed
        pod.error = 'FederationError: HTTP status code was: #{status}'
      end
      pod.update_offline_since
    
    describe Capistrano::Application do
  it 'provides a --trace option which enables SSHKit/NetSSH trace output'
    
        i0 = index
    r1 = _nt_double_quoted_string
    if r1
      r0 = r1
    else
      r2 = _nt_single_quoted_string
      if r2
        r0 = r2
      else
        @index = i0
        r0 = nil
      end
    end
    
      def file_sha1(path)
    digest = Digest::SHA1.new
    fd = File.new(path, 'r')
    while true
      begin
        digest << fd.sysread(16384)
      rescue EOFError
        break
      end
    end
    return digest.hexdigest
  ensure
    fd.close if fd
  end