
        
              # Creates the hidden UTF8 enforcer tag. Override this method in a helper
      # to customize the tag.
      def utf8_enforcer_tag
        # Use raw HTML to ensure the value is written as an HTML entity; it
        # needs to be the right character regardless of which encoding the
        # browser infers.
        '<input name='utf8' type='hidden' value='&#x2713;' />'.html_safe
      end
    
            class << self
          def select_type
            @select_type ||= name.split('::').last.sub('Select', '').downcase
          end
        end
    
          def provider
        oauth['provider']
      end
    
              @pipeline = @project.pipelines.latest_successful_for(@ref)
        end
    
            def initialize(badge)
          @entity = badge.entity
          @status = badge.status
        end
    
            def key_width
          62
        end
    
      def passthru
    render status: 404, plain: 'Not found. Authentication passthru.'
  end
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
          private
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
      def self.generate_manifest
    Manifest.new(store, all_versions).store
  end
    
        def root_path
      context[:root_path]
    end
    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
        def mime_type
      headers['Content-Type'] || 'text/plain'
    end
    
        def merge!(hash)
      return super unless hash.is_a? Hash
      hash.assert_valid_keys URI::Generic::COMPONENT
      hash.each_pair do |key, value|
        send '#{key}=', value
      end
      self
    end
    
              node['data-language'] = 'typescript' if node['path'].try(:ends_with?, '.ts')
          node['data-language'] = 'html' if node['path'].try(:ends_with?, '.html')
          node['data-language'] = 'css' if node['path'].try(:ends_with?, '.css')
          node['data-language'] = 'js' if node['path'].try(:ends_with?, '.js')
          node['data-language'] = 'json' if node['path'].try(:ends_with?, '.json')
          node['data-language'] = node['language'].sub(/\Ats/, 'typescript').strip if node['language']
          node['data-language'] ||= 'typescript' if node.content.start_with?('@')
    
            css('.toc-close', '.naked-list').remove
      end
    
          if @custom_emoji.save
        log_action :create, @custom_emoji
        redirect_to admin_custom_emojis_path, notice: I18n.t('admin.custom_emojis.created_msg')
      else
        render :new
      end
    end
    
          if @email_domain_block.save
        log_action :create, @email_domain_block
        redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.created_msg')
      else
        render :new
      end
    end
    
        def set_report
      @report = Report.find(params[:report_id])
    end
  end
end

    
      before_action :set_account
  respond_to :txt
    
    end
    
      Xcodeproj::PlainInformative.send(:include, CLAide::InformativeError)
    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
    module Jekyll