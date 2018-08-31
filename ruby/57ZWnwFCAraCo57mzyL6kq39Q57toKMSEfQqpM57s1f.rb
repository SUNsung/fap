
        
        def site
  @site ||= Jekyll::Site.new(
    Jekyll.configuration('source' => File.expand_path('../docs', __dir__))
  ).tap(&:reset).tap(&:read)
end
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
          def initialize(runtime, path_or_io, options)
        @runtime = runtime
        @snippets_input = []
        @io = ensure_io(path_or_io)
        @prefixes = options[:prefixes] || {}
        @delayed_messages = []
        @options = options
        @exceptions = []
        @indent = 0
        @timings = {}
      end
    
            def site_template
          File.expand_path('../../site_template', __dir__)
        end
    
            def username
          @username ||= username_and_email[:username].to_s
        end
    
          def identity
        @identity ||= current_user.identities
                                  .with_extern_uid(provider, uid)
                                  .first_or_initialize(extern_uid: uid)
      end
    
    module Gitlab
  module BackgroundMigration
    class PopulateMergeRequestsLatestMergeRequestDiffId
      BATCH_SIZE = 1_000
    
            def key_text
          @entity.to_s
        end
    
    puts 'Deduping #{links.size} links...'
    
      def set_filter
    @filter = current_account.custom_filters.find(params[:id])
  end
    
      def set_account
    @account = Account.find_local!(params[:account_username]) if params[:account_username]
  end
    
      private
    
    module Admin
  class ReportedStatusesController < BaseController
    before_action :set_report
    
      def account_from_topic
    if hub_topic.present? && local_domain? && account_feed_path?
      Account.find_local(hub_topic_params[:username])
    end
  end
    
      it 'no raises a RuntimeError on symbols' do
    v = :sym
    lambda { v.taint }.should_not raise_error(RuntimeError)
    v.tainted?.should == false
  end
    
          errors.each do |error|
        summary << ' #{Formatter.error('-')} #{error}'
      end
    
        # Scrub the high bits out of the call IDs
    src_call ^= 0x8000 if (src_call & 0x8000 != 0)
    dst_call ^= 0x8000 if (dst_call & 0x8000 != 0)
    
              case protocol
          when 'tcp'
            self.connection = create_tcp_connection
          when 'udp'
            raise ::NotImplementedError, 'Kerberos Client: UDP not supported'
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
            end
      end
    end
  end
end

    
              # Decodes the realm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_realm(input)
            input.value[0].value
          end