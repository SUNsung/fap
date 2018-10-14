
        
          def validate_each(record, attribute, value)
    raise(ArgumentError, 'A CarrierWave::Uploader::Base object was expected') unless value.is_a? CarrierWave::Uploader::Base
    
          def provider
        oauth['provider']
      end
    
            def key_text
          @entity.to_s
        end
    
            redirect_to admin_report_path(@report), notice: I18n.t('admin.report_notes.created_msg')
      else
        @report_notes = @report.notes.latest
        @report_history = @report.history
        @form = Form::StatusBatch.new
    
          @form         = Form::StatusBatch.new(form_status_batch_params.merge(current_account: current_account, action: action_from_button))
      flash[:alert] = I18n.t('admin.statuses.failed_to_execute') unless @form.save
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
      def hub_topic_domain
    hub_topic_uri.host + (hub_topic_uri.port ? ':#{hub_topic_uri.port}' : '')
  end
    
        desc 'Commits the version to github repository'
    task :commit_version do
      sh <<-SH
        sed -i 's/.*VERSION.*/  VERSION = '#{source_version}'/' lib/sinatra/version.rb
        sed -i 's/.*VERSION.*/    VERSION = '#{source_version}'/' sinatra-contrib/lib/sinatra/contrib/version.rb
        sed -i 's/.*VERSION.*/    VERSION = '#{source_version}'/' rack-protection/lib/rack/protection/version.rb
      SH
    
          env['rack.errors'] = errors
    
          def real_token(session)
        decode_token(session[:csrf])
      end
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_scripting
    #
    # Automatically escapes Rack::Request#params so they can be embedded in HTML
    # or JavaScript without any further issues. Calls +html_safe+ on the escaped
    # strings if defined, to avoid double-escaping in Rails.
    #
    # Options:
    # escape:: What escaping modes to use, should be Symbol or Array of Symbols.
    #          Available: :html (default), :javascript, :url
    class EscapedParams < Base
      extend Rack::Utils
    
          def close_body(body)
        body.close if body.respond_to?(:close)
      end
    end
  end
end
