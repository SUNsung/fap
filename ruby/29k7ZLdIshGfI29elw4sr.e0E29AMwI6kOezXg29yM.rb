# Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    require 'benchmark/ips'
require 'pathutil'
    
                # stream_file_data would free us from keeping livereload.js in memory
            # but JRuby blocks on that call and never returns
            send_data(reload_body)
            close_connection_after_writing
          else
            body = 'This port only serves livereload.js over HTTP.\n'
            headers = [
              'HTTP/1.1 400 Bad Request',
              'Content-Type: text/plain',
              'Content-Length: #{body.bytesize}',
              '',
              '',
            ].join('\r\n')
            send_data(headers)
            send_data(body)
            close_connection_after_writing
          end
        end
        # rubocop:enable Metrics/MethodLength
      end
    end
  end
end

    
            expect(new_source)
          .to eq('#{prefix}#{open}#{a}, # a\n#{b}#{close} # b\n#{suffix}')
      end
    
          # Returns the delta between this element's delimiter and the argument's.
      #
      # @note Pairs with different delimiter styles return a delta of 0
      #
      # @return [Integer] the delta between the two delimiters
      def delimiter_delta(other)
        HashElementDelta.new(self, other).delimiter_delta
      end
    
        # Short circuit for a `fpm --version` or `fpm -v` short invocation that 
    # is the user asking us for the version of fpm.
    if run_args == [ '-v' ] || run_args == [ '--version' ]
      puts FPM::VERSION
      return 0
    end
    
      # write all scripts to .scripts (tar and dir)
  def write_scripts
    scripts_path = File.join(staging_path, '.scripts')
    target_scripts = [:before_install, :after_install, :before_remove, :after_remove]
    if target_scripts.any? {|name| script?(name)}
      ::Dir.mkdir(scripts_path)
      target_scripts.each do |name|
        next unless script?(name)
        out = File.join(scripts_path, name.to_s)
        logger.debug('Writing script', :source => name, :target => out)
        File.write(out, script(name))
        File.chmod(0755, out)
      end
    end
  end
    
    class FPM::Package::NPM < FPM::Package
  class << self
    include FPM::Util
  end
  # Flags '--foo' will be accessable  as attributes[:npm_foo]
  option '--bin', 'NPM_EXECUTABLE',
    'The path to the npm executable you wish to run.', :default => 'npm'
    
        # Add any facets or actuators that are needed.
    # TODO(jcraig): add manpage actuator to enable install wo/ man pages
    
      # Output this package to the given path.
  def output(output_path)
    output_check(output_path)
    
      # Where we keep metadata and post install scripts and such
  def fpm_meta_path
    @fpm_meta_path ||= begin
                         path = File.join(staging_path, '.fpm')
                         FileUtils.mkdir_p(path)
                         path
                       end
  end
end

    
      def specfile(builddir)
    '#{builddir}/pkginfo'
  end
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
        stdout_r_str = nil
    exit_code = execmd(args, :stdin=>false, :stderr=>false) do |stdout|
      stdout_r_str = stdout.read
    end
    success = (exit_code == 0)