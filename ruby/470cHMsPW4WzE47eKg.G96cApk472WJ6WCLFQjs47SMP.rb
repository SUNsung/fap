
        
                def to_s
          @symbol.to_s
        end
        alias to_str to_s
    
              stats = diff_stats_collection&.find_by_path(diff.new_path)
    
      def respond_to_on_destroy
    # We actually need to hardcode this as Rails default responder doesn't
    # support returning empty response on GET request
    respond_to do |format|
      format.all { head :no_content }
      format.any(*navigational_formats) { redirect_to after_sign_out_path_for(resource_name) }
    end
  end
end

    
      prepend_before_action :assert_is_devise_resource!
  respond_to :html if mimes_for_respond_to.empty?
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
        # Creates configuration values for Devise and for the given module.
    #
    #   Devise::Models.config(Devise::Models::DatabaseAuthenticatable, :stretches)
    #
    # The line above creates:
    #
    #   1) An accessor called Devise.stretches, which value is used by default;
    #
    #   2) Some class methods for your model Model.stretches and Model.stretches=
    #      which have higher priority than Devise.stretches;
    #
    #   3) And an instance method stretches.
    #
    # To add the class methods you need to have a module ClassMethods defined
    # inside the given class.
    #
    def self.config(mod, *accessors) #:nodoc:
      class << mod; attr_accessor :available_configs; end
      mod.available_configs = accessors
    
            def set_reset_password_token
          raw, enc = Devise.token_generator.generate(self.class, :reset_password_token)
    
          class Miscellaneous < FormulaCop
        def audit_formula(_node, _class_node, _parent_class_node, body_node)
          # FileUtils is included in Formula
          # encfs modifies a file with this name, so check for some leading characters
          find_instance_method_call(body_node, 'FileUtils', nil) do |method_node|
            problem 'Don't need 'FileUtils.' before #{method_node.method_name}'
          end
    
              def install
            system 'cargo', 'build'
            ^^^^^^^^^^^^^^^^^^^^^^^ use \'cargo\', \'install\', \'--root\', prefix, \'--path\', \'.\'
          end
        end
      RUBY
    end
  end
end

    
      def recursive_requirements
    Requirement.expand(self)
  end
    
            uses_from_macos('foo', after: :mojave)
      end
    
        raise 'Loaded OS::Mac on generic OS!' if ENV['HOMEBREW_TEST_GENERIC_OS']
    
          def update_instructions
        if OS::Mac.prerelease?
          <<~EOS
            Xcode can be updated from:
              #{Formatter.url('https://developer.apple.com/download/more/')}
          EOS
        else
          <<~EOS
            Xcode can be updated from the App Store.
          EOS
        end
      end
    
      it 'prints the file used to cache the Cask' do
    transmission_location = CurlDownloadStrategy.new(
      local_transmission.url.to_s, local_transmission.token, local_transmission.version,
      cache: Cask::Cache.path, **local_transmission.url.specs
    ).cached_location
    caffeine_location = CurlDownloadStrategy.new(
      local_caffeine.url.to_s, local_caffeine.token, local_caffeine.version,
      cache: Cask::Cache.path, **local_caffeine.url.specs
    ).cached_location
    
    version = ['', 'ext/etc/'].find do |dir|
  begin
    break File.open(File.expand_path('../#{dir}/etc.c', __FILE__)) do |f|
      f.gets '\n#define RUBY_ETC_VERSION '
      f.gets[/'(.+)'/, 1]
    end
  rescue
    next
  end
end
    
        def quote_field(field)
      field = String(field)
      encoded_quote_character = @quote_character.encode(field.encoding)
      encoded_quote_character +
        field.gsub(encoded_quote_character,
                   encoded_quote_character * 2) +
        encoded_quote_character
    end
    
      it 'calls the given block for each line in the stream, passing the line as an argument' do
    ScratchPad.record []
    @gzreader.send(@method) { |b| ScratchPad << b }
    
      def unread_notifications
    notifications.where(:unread => true)
  end
    
          def handle_jwt_bearer(req)
        jwt_string = req['client_assertion']
        jwt = JSON::JWT.decode jwt_string, :skip_verification
        o_auth_app = Api::OpenidConnect::OAuthApplication.find_by(client_id: jwt['iss'])
        raise Rack::OAuth2::Server::Authorize::BadRequest(:invalid_request) unless o_auth_app
        public_key = fetch_public_key(o_auth_app, jwt)
        JSON::JWT.decode(jwt_string, JSON::JWK.new(public_key).to_key)
        req.update_param('client_id', o_auth_app.client_id)
        req.update_param('client_secret', o_auth_app.client_secret)
      end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        if params[:conversation_id]
      @conversation = Conversation.joins(:conversation_visibilities)
                                  .where(conversation_visibilities: {
                                           person_id:       current_user.person_id,
                                           conversation_id: params[:conversation_id]
                                         }).first