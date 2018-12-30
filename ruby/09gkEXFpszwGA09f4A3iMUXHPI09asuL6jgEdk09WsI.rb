
        
              # The minimum number of requests we want to keep available.
      #
      # We don't use a value of 0 as multiple threads may be using the same
      # token in parallel. This could result in all of them hitting the GitHub
      # rate limit at once. The threshold is put in place to not hit the limit
      # in most cases.
      RATE_LIMIT_THRESHOLD = 50
    
          # project - An instance of `Project`.
      # object - The object to look up or set a database ID for.
      def initialize(project, object)
        @project = project
        @object = object
      end
    
            Caching.set_includes?(already_imported_cache_key, id)
      end
    
              hash = {
            iid: issue.number,
            title: issue.title,
            description: issue.body,
            milestone_number: issue.milestone&.number,
            state: issue.state == 'open' ? :opened : :closed,
            assignees: issue.assignees.map do |u|
              Representation::User.from_api_response(u)
            end,
            label_names: issue.labels.map(&:name),
            author: user,
            created_at: issue.created_at,
            updated_at: issue.updated_at,
            pull_request: issue.pull_request ? true : false
          }
    
      # Provides the uri of the redirection location.
  #
  # @return [URI] the uri of the redirection location.
  # @return [nil] if the response hasn't a Location header or it isn't a valid uri.
  def redirection
    begin
      URI(headers['Location'])
    rescue ::URI::InvalidURIError
      nil
    end
  end
    
        when IAX_TYPE_CONTROL
      case stype
      when IAX_CTRL_HANGUP
        dprint('HANGUP')
        self.client.send_ack(self)
        self.state = :hangup
    
      #
  # Move these into an IPMI stack or mixin at some point
  #
    
              # Encodes the options field
          #
          # @return [OpenSSL::ASN1::BitString]
          def encode_options
            OpenSSL::ASN1::BitString.new([options].pack('N'))
          end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos AuthorizationData data
        # definition.
        class AuthorizationData < Element
          # @!attribute elements
          #   @return [Hash{Symbol => <Integer, String>}] The type of the authorization data
          #   @option [Integer] :type
          #   @option [String] :data
          attr_accessor :elements
    
              def self.decode(input)
            elem = self.new
            elem.decode(input)
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
              # Encodes the req_body field
          #
          # @return [String]
          def encode_req_body
            req_body.encode
          end
    
              # Decodes the nonce field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_nonce(input)
            input.value[0].value.to_i
          end
    
              # Rex::Proto::Kerberos::Model::KdcResponse encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'KdcResponse encoding not supported'
          end
    
              # Decodes the stime field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_stime(input)
            input.value[0].value
          end
    
              # Decodes the key_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
        def str_to_byte_pos(pos)
      @s.string.slice(0, pos).bytesize
    end
  end
end
    
      # Send deprecation notices to registered listeners.
  config.active_support.deprecation = :notify
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false
    
    module NavigationHelpers
  def path_to(page_name)
    case page_name
    when /^person_photos page$/
      person_photos_path(@me.person)
    when /^the home(?: )?page$/
      stream_path
    when /^the mobile path$/
      force_mobile_path
    when /^the user applications page$/
      api_openid_connect_user_applications_path
    when /^the tag page for '([^\']*)'$/
      tag_path(Regexp.last_match(1))
    when /^its ([\w ]+) page$/
      send('#{Regexp.last_match(1).gsub(/\W+/, '_')}_path', @it)
    when /^the mobile ([\w ]+) page$/
      public_send('#{Regexp.last_match(1).gsub(/\W+/, '_')}_path', format: 'mobile')
    when /^the ([\w ]+) page$/
      public_send('#{Regexp.last_match(1).gsub(/\W+/, '_')}_path')
    when /^my edit profile page$/
      edit_profile_path
    when /^my profile page$/
      person_path(@me.person)
    when /^my acceptance form page$/
      invite_code_path(InvitationCode.first)
    when /^the requestors profile$/
      person_path(Request.where(recipient_id: @me.person.id).first.sender)
    when /^'([^\']*)''s page$/
      p = User.find_by_email(Regexp.last_match(1)).person
      {path:         person_path(p),
       # '#diaspora_handle' on desktop, '.description' on mobile
       special_elem: {selector: '#diaspora_handle, .description', text: p.diaspora_handle}
      }
    when /^'([^\']*)''s photos page$/
      p = User.find_by_email(Regexp.last_match(1)).person
      person_photos_path p
    when /^my account settings page$/
      edit_user_path
    when /^forgot password page$/
      new_user_password_path
    when %r{^'(/.*)'}
      Regexp.last_match(1)
    else
      raise 'Can't find mapping from \'#{page_name}\' to a path.'
    end
  end
    
          it_behaves_like 'on a visible post'
    end
    
        # The environment of the caller of this environment's mixin or function.
    # @return {Environment?}
    def caller
      @caller || (@parent && @parent.caller)
    end
    
        # Set an option for specifying `Encoding.default_external`.
    #
    # @param opts [OptionParser]
    def encoding_option(opts)
      encoding_desc = 'Specify the default encoding for input files.'
      opts.on('-E', '--default-encoding ENCODING', encoding_desc) do |encoding|
        Encoding.default_external = encoding
      end
    end
    
        def initialize(options)
      @strictly_ordered_queues = !!options[:strict]
      @queues = options[:queues].map { |q| 'queue:#{q}' }
      if @strictly_ordered_queues
        @queues = @queues.uniq
        @queues << TIMEOUT
      end
    end
    
        def self.job_hash_context(job_hash)
      # If we're using a wrapper class, like ActiveJob, use the 'wrapped'
      # attribute to expose the underlying thing.
      klass = job_hash['wrapped'] || job_hash['class']
      bid = job_hash['bid']
      '#{klass} JID-#{job_hash['jid']}#{' BID-#{bid}' if bid}'
    end
    
        NAMED_SEGMENTS_PATTERN = /\/([^\/]*):([^\.:$\/]+)/