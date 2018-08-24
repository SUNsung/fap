
        
                def form_tag_with_body(html_options, content)
          output = form_tag_html(html_options)
          output << content
          output.safe_concat('</form>')
        end
    
              add_default_name_and_id_for_value(tag_value, name_and_id)
          options.delete('index')
          options.delete('namespace')
          options['for'] = name_and_id['id'] unless options.key?('for')
    
        def unsupported_browser?
      browser.ie? && UNSUPPORTED_IE_VERSIONS.include?(browser.version)
    end
    
      def self.all
    Dir['#{root_path}/docs/scrapers/**/*.rb'].
      map { |file| File.basename(file, '.rb') }.
      map { |name| const_get(name.camelize) }.
      sort { |a, b| a.name.casecmp(b.name) }.
      reject(&:abstract)
  end
    
        def empty?
      @entries.empty?
    end
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
        def build_and_queue_request(url, options, &block)
      request = Request.new(url, request_options.merge(options))
      request.on_complete(&block) if block
      queue(request)
      request
    end
    
        class << self
      attr_accessor :dir
    
        def merge(hash)
      return super unless hash.is_a? Hash
      dup.merge!(hash)
    end
    
              node['data-language'] = 'typescript' if node['path'].try(:ends_with?, '.ts')
          node['data-language'] = 'html' if node['path'].try(:ends_with?, '.html')
          node['data-language'] = 'css' if node['path'].try(:ends_with?, '.css')
          node['data-language'] = 'js' if node['path'].try(:ends_with?, '.js')
          node['data-language'] = 'json' if node['path'].try(:ends_with?, '.json')
          node['data-language'] = node['language'].sub(/\Ats/, 'typescript').strip if node['language']
          node['data-language'] ||= 'typescript' if node.content.start_with?('@')
    
    class ActivityPub::OutboxesController < Api::BaseController
  LIMIT = 20
    
      def to_str
    @paths.join(File::PATH_SEPARATOR)
  end
  alias to_s to_str
    
          def summarize
        directives.keys.map(&:to_s).join(', ')
      end
    end
  end
end

    
          def install_phase(**options)
        move(**options)
      end
    
        file package(gem, '.tar.gz') => ['pkg/'] do |f|
      sh <<-SH
        git archive \
          --prefix=#{gem}-#{source_version}/ \
          --format=tar \
          HEAD -- #{directory} | gzip > #{f.name}
      SH
    end
  end
    
      task :index do
    doc = File.read('README.md')
    file = 'doc/rack-protection-readme.md'
    Dir.mkdir 'doc' unless File.directory? 'doc'
    puts 'writing #{file}'
    File.open(file, 'w') { |f| f << doc }
  end
    
              react_and_close(env, body) or [status, headers, body]
        else
          [status, headers, body]
        end
      end
    
            # Should be overriden if you have areas of your checkout that don't match
        # up to a step within checkout_steps, such as a registration step
        def skip_state_validation?
          false
        end
    
            def destroy
          @option_type = Spree::OptionType.accessible_by(current_ability, :destroy).find(params[:id])
          @option_type.destroy
          render plain: nil, status: 204
        end
    
            def scope
          @scope ||= if params[:option_type_id]
                       Spree::OptionType.find(params[:option_type_id]).option_values.accessible_by(current_ability, :read)
                     else
                       Spree::OptionValue.accessible_by(current_ability, :read).load
                     end
        end
    
            def perform_payment_action(action, *args)
          authorize! action, Payment
          @payment.send('#{action}!', *args)
          respond_with(@payment, default_template: :show)
        end