
        
          before do
    sign_in user, scope: :user
  end
    
      def show
    render json: @poll, serializer: REST::PollSerializer, include_results: true
  end
    
      private
    
      before do
    sign_in user, scope: :user
  end
    
        context 'unless compliant?' do
      let(:compliant) { false }
    
      def cmd_kerberos(*args)
    method = Proc.new { client.mimikatz.kerberos }
    mimikatz_request('kerberos', method)
  end
    
        # PHP escapes quotes by default with magic_quotes_gpc, so we use some
    # tricks to get around using them.
    #
    # The raw, unquoted base64 without the terminating equals works because
    # PHP treats it like a string.  There are, however, a couple of caveats
    # because first, PHP tries to parse the bare string as a constant.
    # Because of this, the string is limited to things that can be
    # identifiers, i.e., things that start with [a-zA-Z] and contain only
    # [a-zA-Z0-9_].  Also, for payloads that encode to more than 998
    # characters, only part of the payload gets unencoded on the victim,
    # presumably due to a limitation in PHP identifier name lengths, so we
    # break the encoded payload into roughly 900-byte chunks.
    #
    # https://wiki.php.net/rfc/deprecate-bareword-strings
    
    
</script>
</body>
</html>
    ^
    send_response(cli, html, {'Content-Type'=>'text/html'})
  end
    
    # Function for Creating the Payload
#-------------------------------------------------------------------------------
def create_payload(payload_type,lhost,lport)
  print_status('Creating Payload=#{payload_type} LHOST=#{lhost} LPORT=#{lport}')
  payload = payload_type
  pay = client.framework.payloads.create(payload)
  pay.datastore['LHOST'] = lhost
  pay.datastore['LPORT'] = lport
  return pay.generate
end
    
    module Msf
  autoload :Author, 'msf/core/author'
  autoload :Platform, 'msf/core/platform'
  autoload :Reference, 'msf/core/reference'
  autoload :SiteReference, 'msf/core/site_reference'
  autoload :Target, 'msf/core/target'
    
    ##
#
# Event Log
#
##
TLV_TYPE_EVENT_SOURCENAME   = TLV_META_TYPE_STRING  | 4000
TLV_TYPE_EVENT_HANDLE       = TLV_META_TYPE_QWORD   | 4001
TLV_TYPE_EVENT_NUMRECORDS   = TLV_META_TYPE_UINT    | 4002
    
      describe 'PUT /chat_channel_memberships/:id' do
    before do
      user.add_role(:super_admin)
      post '/chat_channel_memberships', params: {
        chat_channel_membership: { user_id: second_user.id, chat_channel_id: chat_channel.id }
      }
    end
    
          def unprocessable_entity(message)
        render plain: { exception: message }.to_json, status: 422
      end
    
            def create
          authorize! :create, Spree::OptionValue
          @option_value = scope.new(option_value_params)
          if @option_value.save
            render :show, status: 201
          else
            invalid_resource!(@option_value)
          end
        end
    
            def taxonomy_params
          if params[:taxonomy] && !params[:taxonomy].empty?
            params.require(:taxonomy).permit(permitted_taxonomy_attributes)
          else
            {}
          end
        end
      end
    end
  end
end

    
            def taxon_params
          if params[:taxon] && !params[:taxon].empty?
            params.require(:taxon).permit(permitted_taxon_attributes)
          else
            {}
          end
        end
      end
    end
  end
end

    
            def show
          respond_with(user)
        end
    
            def scope
          variants = if @product
                       @product.variants_including_master
                     else
                       Variant
                     end
    
                def resource_finder
              Spree::Api::Dependencies.storefront_credit_card_finder.constantize
            end
    
          assert_raises ArgumentError do
        Sidekiq::Client.push('foo', :class => 'Foo', :noargs => [1, 2])
      end
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'pt-BR,pt;q=0.8,en-US;q=0.6,en;q=0.4')
    assert_equal 'pt-br', obj.locale
    
          p = Sidekiq::Processor.new(mgr)
      JoeWorker.perform_async(1)
      q = Sidekiq::Queue.new
      assert_equal 1, q.size
    
        it 'logs the exception to Sidekiq.logger' do
      Component.new.invoke_exception(:a => 1)
      @str_logger.rewind
      log = @str_logger.readlines
      assert_match(/'a':1/, log[0], 'didn't include the context')
      assert_match(/Something didn't work!/, log[1], 'didn't include the exception message')
      assert_match(/test\/test_exception_handler.rb/, log[2], 'didn't include the backtrace')
    end
    
      class CustomWorker
    $recorder = []
    include Sidekiq::Worker
    def perform(recorder)
      $recorder << ['work_performed']
    end
  end