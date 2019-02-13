
        
            def initialize_stubs
      self.class.stubs.each do |path, block|
        Typhoeus.stub(url_for(path)).and_return do
          Typhoeus::Response.new \
            effective_url: url_for(path),
            code: 200,
            headers: { 'Content-Type' => 'text/html' },
            body: self.instance_exec(&block)
        end
      end
    end
    
          module ClassMethods
        attr_reader :base_urls
    
          private
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
      # Returns real navigational formats which are supported by Rails
  def navigational_formats
    @navigational_formats ||= Devise.navigational_formats.select { |format| Mime::EXTENSION_LOOKUP[format.to_s] }
  end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
            expire_data_after_sign_in!
    
          def headers_for(action, opts)
        headers = {
          subject: subject_for(action),
          to: resource.email,
          from: mailer_sender(devise_mapping),
          reply_to: mailer_reply_to(devise_mapping),
          template_path: template_paths,
          template_name: action
        }.merge(opts)
    
          def remember_me?(token, generated_at)
        # TODO: Normalize the JSON type coercion along with the Timeoutable hook
        # in a single place https://github.com/plataformatec/devise/blob/ffe9d6d406e79108cf32a2c6a1d0b3828849c40b/lib/devise/hooks/timeoutable.rb#L14-L18
        if generated_at.is_a?(String)
          generated_at = time_from_json(generated_at)
        end
    
    module Capistrano
  class Configuration
    class Servers
      include Enumerable