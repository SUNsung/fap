
        
              dt = Date.today
      freeze_time dt
    
        if successfully_sent?(resource)
      respond_with({}, location: after_resending_confirmation_instructions_path_for(resource_name))
    else
      respond_with(resource)
    end
  end
    
      def after_omniauth_failure_path_for(scope)
    new_session_path(scope)
  end
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
    module Devise
  module Mailers
    module Helpers
      extend ActiveSupport::Concern
    
          private
    
          # Extra data to store with the index entry. This can be anything
      # and is treated like a general global state bag.
      #
      # @return [Hash]
      attr_accessor :extra_data
    
              hosts
        end
    
                @logger.info('With machine: #{machine.name} (#{machine.provider.inspect})')
            yield machine
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
        # Outputs a single category as an <a> link.
    #
    #  +category+ is a category string to format as an <a> link
    #
    # Returns string
    #
    def category_link(category)
      dir = @context.registers[:site].config['category_dir']
      '<a class='category' href='/#{dir}/#{category.to_url}/'>#{category}</a>'
    end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
        def poster
      'poster='#{@poster}'' if @poster
    end
    
      after { FileUtils.rm_rf(public_path) }
    
        context 'when file has been cached' do
      before { uploader.cache!(test_file) }
    
        def self.certificates_from_file(path)
      data = File.read(path)
      pattern = Regexp.compile('-+BEGIN CERTIFICATE-+\n(?:[^-]*\n)+-+END CERTIFICATE-+\n', Regexp::MULTILINE)
      list = []
      data.scan(pattern){|match| list << OpenSSL::X509::Certificate.new(match)}
      list
    end
    
    puts 'Connected to #{uri}.'
puts 'Usage:'
puts '    Fluent::Engine.root_agent.event_router.match('some.tag') : get an output plugin instance'
puts '    Fluent::Engine.root_agent.inputs[i]                      : get input plugin instances'
puts '    Fluent::Plugin::OUTPUT_REGISTRY.lookup(name)             : load output plugin class (use this if you get DRb::DRbUnknown)'
puts ''
    
            def each_line(line)
          line.chomp!
          vals = line.split('\t')
    
          def shutdown
        super
      end
    end
  end
end

    
            formatter_params = {}
        FORMATTER_PARAMS.each do |older, newer|
          next unless newer
          if conf.has_key?(older)
            formatter_params[newer] = conf[older]
          end
        end
        unless formatter_params.empty?
          conf.elements << Fluent::Config::Element.new('format', '', formatter_params, [])
        end
      end
    end
  end
end

    
    module Fluent
  module Compat
    class Input < Fluent::Plugin::Input
      # TODO: warn when deprecated