
        
                  if options['multiple']
            add_default_name_and_id_for_value(@checked_value, options)
            options.delete('multiple')
          else
            add_default_name_and_id(options)
          end
    
              def hidden_field
            hidden_name = @html_options[:name] || hidden_field_name
            @template_object.hidden_field_tag(hidden_name, '', id: nil)
          end
    
        def set_email_domain_block
      @email_domain_block = EmailDomainBlock.find(params[:id])
    end
    
            render template: 'admin/reports/show'
      end
    end
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      def create
    active_session = current_session
    
      def update
    setting.data = params[:data]
    setting.save!
    
      private
    
      private
    
    ENV['COCOAPODS_DISABLE_STATS'] = 'true'

    
    class FPM::Package::NPM < FPM::Package
  class << self
    include FPM::Util
  end
  # Flags '--foo' will be accessable  as attributes[:npm_foo]
  option '--bin', 'NPM_EXECUTABLE',
    'The path to the npm executable you wish to run.', :default => 'npm'
    
      def initialize(package_name, opts = {}, &block)
    @options = OpenStruct.new(:name => package_name.to_s)
    @source, @target = opts.values_at(:source, :target).map(&:to_s)
    @directory = File.expand_path(opts[:directory].to_s)