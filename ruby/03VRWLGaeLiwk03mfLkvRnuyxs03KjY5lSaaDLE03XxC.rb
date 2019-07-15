
        
        module AbstractController
  module Testing
    class ControllerWithHelpers < AbstractController::Base
      include AbstractController::Helpers
      include AbstractController::Rendering
      include ActionView::Rendering
    
          # Try to add the gems to the current gemfile and lock file, if successful
      # both of them will be updated. This injector is similar to Bundler's own injector class
      # minus the support for additionals source and doing local resolution only.
      ::Bundler::LogstashInjector.inject!(pack)
    
    class LogStash::PluginManager::Update < LogStash::PluginManager::Command
  REJECTED_OPTIONS = [:path, :git, :github]
  # These are local gems used by LS and needs to be filtered out of other plugin gems
  NON_PLUGIN_LOCAL_GEMS = ['logstash-core', 'logstash-core-plugin-api']
    
          @@order_attributes = [
        :id, :number, :item_total, :total, :ship_total, :state, :adjustment_total,
        :user_id, :created_at, :updated_at, :completed_at, :payment_total,
        :shipment_state, :payment_state, :email, :special_instructions, :channel,
        :included_tax_total, :additional_tax_total, :display_included_tax_total,
        :display_additional_tax_total, :tax_total, :currency, :considered_risky,
        :canceler_id
      ]
    
    ## -- Rsync Deploy config -- ##
# Be sure your public key is listed in your server's ~/.ssh/authorized_keys file
ssh_user       = 'user@domain.com'
ssh_port       = '22'
document_root  = '~/website.com/'
rsync_delete   = false
rsync_args     = ''  # Any extra arguments to pass to rsync
deploy_default = 'rsync'
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end