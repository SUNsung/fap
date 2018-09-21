
        
            doc
  rescue NameError => error
    if error.name.to_s == const
      raise DocNotFound.new(%(could not find doc '#{name}'), name)
    else
      raise error
    end
  end
    
        def request_all(urls, &block)
      if options[:rate_limit]
        if @@rate_limiter
          @@rate_limiter.limit = options[:rate_limit]
        else
          @@rate_limiter = RateLimiter.new(options[:rate_limit])
          Typhoeus.before(&@@rate_limiter.to_proc)
        end
      end
    
            css('a.is-button > h3').each do |node|
          node.parent.content = node.content
        end
    
            css('.api-profile-header-structure > li').each do |node|
          node.inner_html = node.inner_html.remove('- ')
        end
    
        if PostRequests.include?(self.method)
      return param_string
    end
    ''
  end
    
    IAX_IE_CALLED_NUMBER  = 1
IAX_IE_CALLING_NUMBER = 2
IAX_IE_AUTH_METHODS   = 3
IAX_IE_CALLING_NAME   = 4
IAX_IE_USERNAME       = 6
IAX_IE_DESIRED_CODEC  = 9
IAX_IE_ORIGINAL_DID   = 10
IAX_IE_ACTUAL_CODECS  = 8
IAX_IE_PROTO_VERSION  = 11
IAX_IE_REG_REFRESH    = 19
IAX_IE_CHALLENGE_DATA = 15
IAX_IE_CHALLENGE_RESP = 16
IAX_IE_APPARENT_ADDR  = 18
IAX_IE_REGREJ_CAUSE   = 22
IAX_IE_HANGUP_CAUSE   = 42
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of credential times stored in the Kerberos Credential Cache.
        class Time < Element
          # @!attribute auth_time
          #   @return [Integer]
          attr_accessor :auth_time
          # @!attribute start_time
          #   @return [Integer]
          attr_accessor :start_time
          # @!attribute end_time
          #   @return [Integer]
          attr_accessor :end_time
          # @!attribute renew_till
          #   @return [Integer]
          attr_accessor :renew_till
    
              # Encodes the options field
          #
          # @return [OpenSSL::ASN1::BitString]
          def encode_options
            OpenSSL::ASN1::BitString.new([options].pack('N'))
          end
    
                seq = OpenSSL::ASN1::Sequence.new(seqs)
    
              # Decodes the till field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_till(input)
            input.value[0].value
          end
    
              # Decodes the crealm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_crealm(input)
            input.value[0].value
          end
    
      def remove_duplicates
    where = 'WHERE s1.user_id = s2.user_id AND s1.shareable_id = s2.shareable_id AND '\
      's1.shareable_type = s2.shareable_type AND s1.id > s2.id'
    if AppConfig.postgres?
      execute('DELETE FROM share_visibilities AS s1 USING share_visibilities AS s2 #{where}')
    else
      execute('DELETE s1 FROM share_visibilities s1, share_visibilities s2 #{where}')
    end
  end
end

    
    When /^I toggle all nsfw posts$/ do
  all('a.toggle_nsfw_state').each &:click
end
    
    Before do |scenario|
  Devise.mailer.deliveries = []
  page.driver.headers = if scenario.source_tag_names.include? '@mobile'
                          {'User-Agent' => 'Mozilla/5.0 (Mobile; rv:18.0) Gecko/18.0 Firefox/18.0'}
                        else
                          {}
                        end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end

    
        it 'generates a jasmine fixture', :fixture => true do
      get :index, params: {conversation_id: @conv1.id}
      save_fixture(html_for('body'), 'conversations_unread')
    
          delete :destroy, params: {post_id: @message.id, id: like2.id}, format: :json
      expect(response.status).to eq(404)
      expect(response.body).to eq(I18n.t('likes.destroy.error'))
      expect(Like.count).to eq(like_count)
    end
  end
end

    
      require 'cocoapods/gem_version'
  require 'cocoapods-core'
  require 'cocoapods/config'
  require 'cocoapods/downloader'
    
      SPREE_GEMS.each do |gem_name|
    rm_f  '#{gem_name}/Gemfile.lock'
    rm_rf '#{gem_name}/pkg'
    rm_rf '#{gem_name}/spec/dummy'
  end
end
    
          def invalid_resource!(resource)
        @resource = resource
        render 'spree/api/errors/invalid_resource', status: 422
      end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@return_authorization)
        end
    
            def scope
          if params[:country_id]
            @country = Country.accessible_by(current_ability, :read).find(params[:country_id])
            @country.states.accessible_by(current_ability, :read).order('name ASC')
          else
            State.accessible_by(current_ability, :read).order('name ASC')
          end
        end
      end
    end
  end
end

    
    When /^(?:|I )choose '([^']*)'$/ do |field|
  choose(field)
end
    
      def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
  end
    
      def migration_file_name
    '#{migration_name}.rb'
  end