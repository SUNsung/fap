
        
        CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
                  Jekyll.logger.info 'LiveReload address:',
                                 'http://#{opts['host']}:#{opts['livereload_port']}'
            end
          end
          @thread.abort_on_exception = true
        end
    
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

    
            true
      end
    
            # Download a file from the remote machine to the local machine.
        #
        # @param [String] from Path of the file on the remote machine.
        # @param [String] to Path of where to save the file locally.
        def download(from, to)
        end
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
            # Defines additional configuration keys to be available in the
        # Vagrantfile. The configuration class should be returned by a
        # block passed to this method. This is done to ensure that the class
        # is lazy loaded, so if your class inherits from any classes that
        # are specific to Vagrant 1.0, then the plugin can still be defined
        # without breaking anything in future versions of Vagrant.
        #
        # @param [String] name Configuration key.
        # @param [Boolean] upgrade_safe If this is true, then this configuration
        #   key is safe to load during an upgrade, meaning that it depends
        #   on NO Vagrant internal classes. Do _not_ set this to true unless
        #   you really know what you're doing, since you can cause Vagrant
        #   to crash (although Vagrant will output a user-friendly error
        #   message if this were to happen).
        def self.config(name=UNSET_VALUE, upgrade_safe=false, &block)
          data[:config] ||= Registry.new
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
    Given(/^(\d+) valid existing releases$/) do |num|
  a_day = 86_400 # in seconds
  offset = -(a_day * num.to_i)
  num.to_i.times do
    run_vagrant_command('mkdir -p #{TestApp.release_path(TestApp.timestamp(offset))}')
    offset += a_day
  end
end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          sshkit.use_format(*format_args)
    end
  end
end

    
    set_if_empty :format, :airbrussh
set_if_empty :log_level, :debug
    
        # Extracts the Geometry from a 'WxH,O' string
    # Where W is the width, H is the height,
    # and O is the EXIF orientation
    def self.parse(string)
      GeometryParser.new(string).make
    end
    
        # Provide any template values as methods on the package.
    if template_scripts?
      template_value_list.each do |key, value|
        (class << output; self; end).send(:define_method, key) { value }
      end
    end
    
    class FPM::Package::FreeBSD < FPM::Package
  SCRIPT_MAP = {
    :before_install     => 'pre-install',
    :after_install      => 'post-install',
    :before_remove      => 'pre-deinstall',
    :after_remove       => 'post-deinstall',
  } unless defined?(SCRIPT_MAP)
    
        if info.include?('repository')
      self.url = info['repository']['url']
    else
      self.url = 'https://npmjs.org/package/#{self.name}'
    end
    
        # Final edit for lint check and packaging
    edit_file(manifest_fn) if attributes[:edit?]
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
end # class FPM::Deb
    
      def run_cli
    require 'fpm'
    require 'fpm/command'