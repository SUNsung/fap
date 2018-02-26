    # Returns whether `string` is a valid IP address or IP address range.
    #
    # @return [true] if valid IP address or IP address range.
    # @return [false] otherwise.
    def valid_ip_or_range?(string)
      range = Rex::Socket::RangeWalker.new(string)
      range && range.ranges && range.ranges.any?
    end
    
    unless ENV['BUNDLE_GEMFILE']
  require 'pathname'
    
      out = File.join(output, site + '.txt')
  File.unlink(out) if File.exist?(out)
    
            # Remove it form the session objects so freeup
        sessions.delete(s[:session])
    
    outputJar = 'output.jar'
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
          def initialize(argv)
        @podfile_path = Pathname.pwd + 'Podfile'
        @project_path = argv.shift_argument
        @project_paths = Pathname.pwd.children.select { |pn| pn.extname == '.xcodeproj' }
        super
      end
    
            self.summary = 'The repl listens to commands on standard input'
        self.description = <<-DESC
          The repl listens to commands on standard input and prints their
          result to standard output.
          It accepts all the other ipc subcommands. The repl will signal the
          end of output with the the ASCII CR+LF `\\n\\r`.
        DESC
    
            # Runs the template configuration utilities.
        #
        # @return [void]
        #
        def configure_template
          UI.section('Configuring #{@name} template.') do
            Dir.chdir(@name) do
              if File.exist?('configure')
                system({ 'COCOAPODS_VERSION' => Pod::VERSION }, './configure', @name, *@additional_args)
              else
                UI.warn 'Template does not have a configure file.'
              end
            end
          end
        end
    
          #-----------------------------------------------------------------------#
    end
  end
end

    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
        def initialize
      clear
    end
    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Cocaine::ExitStatusError
        ''
      rescue Cocaine::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end
    
        # Returns the id of the instance in a split path form. e.g. returns
    # 000/001/234 for an id of 1234.
    def id_partition attachment, style_name
      case id = attachment.instance.id
      when Integer
        ('%09d'.freeze % id).scan(/\d{3}/).join('/'.freeze)
      when String
        id.scan(/.{3}/).first(3).join('/'.freeze)
      else
        nil
      end
    end
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
              def find_plugins_gem_specs
            @specs ||= ::Gem::Specification.find_all.select{|spec| logstash_plugin_gem_spec?(spec)}
          end
    
          def get_shallow(*path)
        snapshot.metric_store.get_shallow(*path)
      end
    
      public
  # Relies on the codec being synchronous (which they all are!)
  # We need a better long term design here, but this is an improvement
  # over the current API for shared plugins
  # It is best if the codec implements this directly
  def multi_encode(events)
    if @has_encode_sync              
      events.map {|event| [event, self.encode_sync(event)]}
    else
      batch = Thread.current[:logstash_output_codec_batch] ||= []
      batch.clear
      
      events.each {|event| self.encode(event) }
      batch
    end
  end