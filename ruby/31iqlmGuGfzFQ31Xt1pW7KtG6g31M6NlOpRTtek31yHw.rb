
        
              it 'adds docset_feed_formats param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_feed_formats: 'atom'
          )
        end').runner.execute(:test)
    
          it 'Only include merge commits if merge_commit_filtering is only_include_merges' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(merge_commit_filtering: 'only_include_merges')
        end').runner.execute(:test)
    
              result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              quiet: true
            )
          end').runner.execute(:test)
    
        context 'with a postfix block' do
      it 'yields the status, result and command' do
        expect_command('ls', '-la')
        Fastlane::Actions.sh('ls', '-la') do |status, result, command|
          expect(status.exitstatus).to eq(0)
          expect(result).to be_empty
          expect(command).to eq('ls -la')
        end
      end
    
              expect(value).to eq(hash)
        end
    
        os = 'windows'
    shellescape_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        str = testcase['str'].to_s
        expect_correct_implementation_to_be_called(str, :shellescape, os)
        escaped = str.shellescape
        expect(escaped).to eq(testcase['expect'][os])
      end
    end
  end
    
            c.action do |args, options|
          Cert.config = FastlaneCore::Configuration.create(Cert::Options.available_options, options.__hash__)
          Cert::Runner.new.launch
        end
      end
    
      def page_params
    { page: true, max_id: params[:max_id], min_id: params[:min_id] }.compact
  end
end

    
          if new_email != @user.email
        @user.update!(
          unconfirmed_email: new_email,
          # Regenerate the confirmation token:
          confirmation_token: nil
        )
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
      def hub_topic_params
    @_hub_topic_params ||= Rails.application.routes.recognize_path(hub_topic_uri.path)
  end
    
      def payload
    @_payload ||= request.body.read
  end
    
      # Handling incoming control packets
  # TODO: Enforce sequence order to prevent duplicates from breaking our state
  def handle_control(pkt)
    src_call, dst_call, tstamp, out_seq, inp_seq, itype = pkt.unpack('nnNCCC')
    
    
  #
  # Payload types were copied from xCAT-server source code (IPMI.pm)
  #
  RMCP_ERRORS = {
    1 => 'Insufficient resources to create new session (wait for existing sessions to timeout)',
    2 => 'Invalid Session ID', #this shouldn't occur...
    3 => 'Invalid payload type',#shouldn't occur..
    4 => 'Invalid authentication algorithm', #if this happens, we need to enhance our mechanism for detecting supported auth algorithms
    5 => 'Invalid integrity algorithm', #same as above
    6 => 'No matching authentication payload',
    7 => 'No matching integrity payload',
    8 => 'Inactive Session ID', #this suggests the session was timed out while trying to negotiate, shouldn't happen
    9 => 'Invalid role',
    0xa => 'Unauthorised role or privilege level requested',
    0xb => 'Insufficient resources to create a session at the requested role',
    0xc => 'Invalid username length',
    0xd => 'Unauthorized name',
    0xe => 'Unauthorized GUID',
    0xf => 'Invalid integrity check value',
    0x10 => 'Invalid confidentiality algorithm',
    0x11 => 'No cipher suite match with proposed security algorithms',
    0x12 => 'Illegal or unrecognized parameter', #have never observed this, would most likely mean a bug in xCAT or IPMI device
  }
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # No Encryption
      0x00, 0x00, 0x00, 0x00
    ].pack('C*')
    
            # Decodes a Kerberos response
        #
        # @param data [String] the raw response message
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] the kerberos message response
        # @raise [RuntimeError] if the response can't be processed
        def decode_kerb_response(data)
          asn1 = OpenSSL::ASN1.decode(data)
          msg_type = asn1.value[0].value[1].value[0].value
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the last_req from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Array<Rex::Proto::Kerberos::Model::LastRequest>]
          def decode_last_req(input)
            last_requests = []
            input.value[0].value.each do |last_request|
              last_requests << Rex::Proto::Kerberos::Model::LastRequest.decode(last_request)
            end
    
              # Decodes the pa_data from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Array<Rex::Proto::Kerberos::Model::PreAuthData>]
          def decode_asn1_pa_data(input)
            pre_auth = []
            input.value[0].value.each do |pre_auth_data|
              pre_auth << Rex::Proto::Kerberos::Model::PreAuthData.decode(pre_auth_data)
            end
    
              # Decodes the realm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_realm(input)
            input.value[0].value
          end
    
          # Calls the given block for each `pair` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_pair
        return each_child_node(:pair).to_enum unless block_given?
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end

    
          # Checks whether any argument of the node is a splat
      # argument, i.e. `*splat`.
      #
      # @return [Boolean] whether the node is a splat argument
      def splat_argument?
        arguments? &&
          (arguments.any?(&:splat_type?) || arguments.any?(&:restarg_type?))
      end
      alias rest_argument? splat_argument?
    
          def spree_icon(icon_name)
        icon_name ? content_tag(:i, '', class: icon_name) : ''
      end
    
        it 'is able to apply a ransack filter by clicking a quickfilter icon', js: true do
      label_pending = page.find '.badge-pending'
      parent_td = label_pending.find(:xpath, '..')
    
          within_row(2) { click_icon :split }
      targetted_select2 'LA(#{order.reload.shipments.last.number})', from: '#s2id_item_stock_location'
      click_icon :save
      wait_for_ajax
      expect(page.find('#shipment_#{order.reload.shipments.last.id}')).to be_present
    end
  end
end

    
              can_event = 'can_#{@event}?'
    
              respond_with(@line_item, status: 204)
        end
    
    end

    
      def admin_required
    if logged_in?
      unless current_user.admin?
        render :text => 'Not permitted'
      end
    else
      redirect_to login_path(:return_to => request.fullpath)
    end
  end
    
      before_action { @server = organization.servers.present.find_by_permalink!(params[:server_id]) }
  before_action { params[:id] && @route = @server.routes.find_by_uuid!(params[:id]) }
    
    end

    
      def index
    @webhooks = @server.webhooks.order(:url).to_a
  end