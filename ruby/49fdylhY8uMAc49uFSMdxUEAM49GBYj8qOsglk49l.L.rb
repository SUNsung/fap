
        
              # The String representation of this Trigger.
      #
      # @return [String]
      def to_s
        'trigger config'
      end
    end
  end
end

    
    require_relative '../../../../lib/vagrant/util/presence'
require_relative '../../../../lib/vagrant/util/template_renderer'
    
        it 'raises an error if a box already exists' do
      box_path = iso_env.box2_file(:virtualbox)
      tf = Tempfile.new(['vagrant-box-already-exists', '.json']).tap do |f|
        f.write(<<-RAW)
        {
          'name': 'foo/bar',
          'versions': [
            {
              'version': '0.5'
            },
            {
              'version': '0.7',
              'providers': [
                {
                  'name': 'virtualbox',
                  'url':  '#{box_path}'
                }
              ]
            }
          ]
        }
        RAW
        f.close
      end
    
              raise Errors::ProviderNotFound,
            machine: name, provider: provider, providers: providers_str
        end
    
            begin
          state_id = :host_state_unknown if !state_id && \
            host_vm? && !host_vm.communicate.ready?
        rescue Errors::VagrantfileNotFound
          state_id = :host_state_unknown
        end
    
      subject { described_class.new(argv, iso_env) }
    
        context 'with version 1.8+' do
      subject { described_class.new(%w[1.8+]) }
    
          unless system curl_executable, '--silent', '--fail', '--output', '/dev/null', package_url
        package_blob = <<~JSON
          {'name': '#{bintray_package}',
           'public_download_numbers': true,
           'public_stats': true}
        JSON
        curl '--silent', '--fail', '--user', '#{bintray_user}:#{bintray_key}',
             '--header', 'Content-Type: application/json',
             '--data', package_blob, bintray_repo_url
        puts
      end
    
          it 'creates a block from sender to recipient' do
        expect(sender.blocking?(recipient)).to be true
      end
    end
  end
    
        map = map.sort { |a, b| a[0].size <=> b[0].size }.to_h
    
        context 'follow.account.nil? || !follow.account.local?' do
      let(:_nil)    { true }
    
    class Scheduler::EmailScheduler
  include Sidekiq::Worker
    
        it 'renders the headers' do
      expect(mail.subject).to eq('Pending follower: bob')
      expect(mail.to).to eq([receiver.email])
    end
    
      def show
    render json: @poll, serializer: REST::PollSerializer, include_results: true
  end
    
    RSpec.describe Api::V1::PollsController, type: :controller do
  render_views
    
      config.wrappers :with_floating_label, class: [:input, :with_floating_label], hint_class: :field_with_hint, error_class: :field_with_errors do |b|
    b.use :html5
    b.use :label_input, wrap_with: { tag: :div, class: :label_input }
    b.use :hint,  wrap_with: { tag: :span, class: :hint }
    b.use :error, wrap_with: { tag: :span, class: :error }
  end
    
          ))
    register_options(
      [
        OptAddress.new('LHOST', [ true, 'Host listening for incoming SMB/WebDAV traffic', nil]),
        OptString.new('FILENAME', [ true, 'Filename - supports *.lnk, *.scf, *.url, *.xml, desktop.ini', 'word.lnk']),
      ])
  end
    
          print_status('Started #{human_name} handler against #{rhost}:#{lport}')
    
        case res.code
    when 201
      print_good('Playing https://www.youtube.com/watch?v=#{vid}')
    when 200
      print_status('Stopping video')
    when 404
      print_error('Target no longer supports casting via the DIAL protocol. ' \
                  'CASTV2 is not supported by this module at this time.')
    end
  end
    
        framework.db.create_payload(uuid_info)
  end
    
    lib_path = root.join('lib').to_path
    
        # LinkHeader
    ret = [
      0x4c, 0x00, 0x00, 0x00, # HeaderSize, must be 0x0000004C
      0x01, 0x14, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, # LinkCLSID, must be 00021401-0000-0000-C000-000000000046
      0x81, 0x00, 0x00, 0x00, # LinkFlags (HasLinkTargetIDList | IsUnicode)
      0x00, 0x00, 0x00, 0x00, # FileAttributes
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, # CreationTime
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, # AccessTime
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, # WriteTime
      0x00, 0x00, 0x00, 0x00, # FileSize
      0x00, 0x00, 0x00, 0x00, # IconIndex
      0x00, 0x00, 0x00, 0x00, # ShowCommand
      0x00, 0x00, # HotKey
      0x00, 0x00, # Reserved1
      0x00, 0x00, 0x00, 0x00, # Reserved2
      0x00, 0x00, 0x00, 0x00  # Reserved3
    ].pack('C*')
    
        temprexe
  end
    
        # Set vars
    rexe = datastore['REXEPATH']
    rexename = datastore['REXENAME']
    host, _port = session.tunnel_peer.split(':')
    @clean_up_rc = ''
    
                  <% if frame.post_context %>
              <ol start='<%=h frame.lineno + 1 %>' class='post-context'
                  id='post-<%= id %>' onclick='toggle(<%= id %>);'>
                <% frame.post_context.each do |line| %>
                <li class='post-context-line'><code><%=h line %></code></li>
                <% end %>
              </ol>
              <% end %>
              <div class='clear'></div>
            </li>
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to be_nil
    expect(headers['Content-Security-Policy-Report-Only']).to eq('connect-src 'self'; default-src none; img-src 'self'; report-uri /my_amazing_csp_report_parser; script-src 'self'; style-src 'self'')
  end
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
          true
    end
    
    module Spree
  class ReturnItem::EligibilityValidator::Default < Spree::ReturnItem::EligibilityValidator::BaseValidator
    class_attribute :permitted_eligibility_validators
    self.permitted_eligibility_validators = [
      ReturnItem::EligibilityValidator::OrderCompleted,
      ReturnItem::EligibilityValidator::TimeSincePurchase,
      ReturnItem::EligibilityValidator::RMARequired,
      ReturnItem::EligibilityValidator::InventoryShipped,
      ReturnItem::EligibilityValidator::NoReimbursements
    ]
    
            def self.ensure_variant_id_from_params(hash)
          sku = hash.delete(:sku)
          unless hash[:variant_id].present?
            hash[:variant_id] = Spree::Variant.active.find_by!(sku: sku).id
          end
          hash
        rescue ActiveRecord::RecordNotFound => e
          raise 'Ensure order import variant: Variant w/SKU #{sku} not found.'
        rescue Exception => e
          raise 'Ensure order import variant: #{e.message} #{hash}'
        end
    
          failed_orders << order unless order.completed? && order.valid?
    rescue StandardError
      failed_orders << order
    end
    failure_message = failed_orders.map { |o| '#{o.number} - #{o.errors.full_messages}' }.join(', ')
    raise UnableToChargeForUnreturnedItems, failure_message if failed_orders.present?
  end
end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
          authorize! :show, @order, order_token
        end
    
            def ready
          unless @shipment.ready?
            if @shipment.can_ready?
              @shipment.ready!
            else
              render 'spree/api/v1/shipments/cannot_ready_shipment', status: 422 and return
            end
          end
          respond_with(@shipment, default_template: :show)
        end