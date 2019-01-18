
        
            private
    
        def options
      @options ||= self.class.options.deep_dup.tap do |options|
        options.merge! base_url: base_url, root_url: root_url,
                       root_path: root_path, initial_paths: initial_paths,
                       version: self.class.version, release: self.class.release
    
          def include_default_entry?
        INDEX.add?([name, type].join(';')) ? true : false # ¯\_(ツ)_/¯
      end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
          def parse_uri(location)
        location && URI.parse(location)
      rescue URI::InvalidURIError
        nil
      end
    
    module Devise
  module Mailers
    module Helpers
      extend ActiveSupport::Concern
    
        def log_status(status)
      puts bold status
    end
    
        def vendor_path(path)
      return ::File.join(LOGSTASH_HOME, 'vendor', path)
    end
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
          puts 'Halting #{machines}'
      LogStash::VagrantHelpers.halt(machines, options)
    end
  end
    
            def advance
          authorize! :update, @order, order_token
          while @order.next; end
          respond_with(@order, default_template: 'spree/api/v1/orders/show', status: 200)
        end
    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def find_property
          @property = Spree::Property.accessible_by(current_ability, :read).find(params[:id])
        rescue ActiveRecord::RecordNotFound
          @property = Spree::Property.accessible_by(current_ability, :read).find_by!(name: params[:id])
        end
    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update_attributes(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end
    
              if params[:stock_item].key?(:backorderable)
            @stock_item.backorderable = params[:stock_item][:backorderable]
            @stock_item.save
          end
    
        module PsychAutoload
      def resolve_class(klass_name)
        return nil if !klass_name || klass_name.empty?
        # constantize
        names = klass_name.split('::')
        names.shift if names.empty? || names.first.empty?
    
    module Sidekiq
  class Web
    ROOT = File.expand_path('#{File.dirname(__FILE__)}/../../web')
    VIEWS = '#{ROOT}/views'
    LOCALES = ['#{ROOT}/locales']
    LAYOUT = '#{VIEWS}/layout.erb'
    ASSETS = '#{ROOT}/assets'