
        
            describe '#revoke!' do
      it 'revokes the key with the client' do
        mock_client_response(:revoke_key!)
    
        private_class_method
    def self.git_log_merge_commit_filtering_option(merge_commit_filtering)
      case merge_commit_filtering
      when :exclude_merges
        '--no-merges'
      when :only_include_merges
        '--merges'
      when :include_merges
        nil
      end
    end
  end
end

    
    module SortableTable
  extend ActiveSupport::Concern
    
      def index
    set_table_sort sorts: %w[credential_name credential_value], default: { credential_name: :asc }
    
        def find_local(username)
      find_remote(username, nil)
    end
    
            expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(actor)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), actor, instance_of(Hash))
    
    class REST::MediaAttachmentSerializer < ActiveModel::Serializer
  include RoutingHelper
    
      describe 'GET #show' do
    it 'returns http success' do
      get :show
      expect(response).to have_http_status(:success)
    end
  end
    
        HTTP.get(source).to_s.split('\n').each do |line|
      next if line.start_with? '#'
      parts = line.split(';').map(&:strip)
      next if parts.size < 2
      codes << [parts[0], parts[1].start_with?('fully-qualified')]
    end
    
        # If {#limit_to_network} is disabled, this will always return `true`.
    # Otherwise, return `true` only if all of the given IPs are within the
    # project {#boundary boundaries}.
    
        end
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 110 and pkt.tcp_dport != 110)
    s = find_session((pkt.tcp_sport == 110) ? get_session_src(pkt) : get_session_dst(pkt))
    
        def initialize(attributes={})
      assign_attributes(attributes)
      yield(self) if block_given?
    end
    
          def create
        req = Rack::Request.new(request.env)
        if req['client_assertion_type'] == 'urn:ietf:params:oauth:client-assertion-type:jwt-bearer'
          handle_jwt_bearer(req)
        end
        self.status, headers, self.response_body = Api::OpenidConnect::TokenEndpoint.new.call(request.env)
        headers.each {|name, value| response.headers[name] = value }
        nil
      end
    
      context 'called with two colors' do
    it 'applies to alternating sides' do
      rule = 'border-color: #0f0 #00f'