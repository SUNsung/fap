
        
                # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
              start_up_webrick(opts, destination)
        end
    
    require_relative 'websockets'
    
              unless typ =~ %r!;\s*charset=!
            res.header[key] = '#{typ}; charset=#{@jekyll_opts['encoding']}'
          end
        end
    
          # Private: Determine whether a class name is an allowed custom
      #   markdown class name.
      #
      # parser_name - the name of the parser class
      #
      # Returns true if the parser name contains only alphanumeric
      # characters and is defined within Jekyll::Converters::Markdown
      def custom_class_allowed?(parser_name)
        parser_name !~ %r![^A-Za-z0-9_]! && self.class.constants.include?(
          parser_name.to_sym
        )
      end
    end
  end
end

    
          # Set a field in the Drop. If mutable, sets in the mutations and
      # returns. If not mutable, checks first if it's trying to override a
      # Drop method and raises a DropMutationException if so. If not
      # mutable and the key is not a method on the Drop, then it sets the
      # key to the value in the underlying hash (e.g. document front
      # matter)
      #
      # key - the String key whose value to set
      # val - the Object to set the key's value to
      #
      # Returns the value the key was set to unless the Drop is not mutable
      # and the key matches a method in which case it raises a
      # DropMutationException.
      def []=(key, val)
        if respond_to?('#{key}=')
          public_send('#{key}=', val)
        elsif respond_to?(key.to_s)
          if self.class.mutable?
            @mutations[key] = val
          else
            raise Errors::DropMutationException, 'Key #{key} cannot be set in the drop.'
          end
        else
          fallback_data[key] = val
        end
      end
    
      # Creates a delayed logger wrapping `inner`.
  #
  # @param inner [Sass::Logger::Base] The wrapped logger.
  def initialize(inner)
    self.log_level = inner.log_level
    @inner = inner
    @messages = []
  end
    
        # Returns the CSS for the media query list.
    #
    # @return [String]
    def to_css
      queries.map {|q| q.to_css}.join(', ')
    end
    
    desc 'copy dot files for deployment'
task :copydot, :source, :dest do |t, args|
  FileList['#{args.source}/**/.*'].exclude('**/.', '**/..', '**/.DS_Store', '**/._*').each do |file|
    cp_r file, file.gsub(/#{args.source}/, '#{args.dest}') unless File.directory?(file)
  end
end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end