
        
                  find_instance_method_call(body_node, :build, :without?) do |method|
            next unless unless_modifier?(method.parent)
    
              find_instance_method_call(body_node, 'Formula', :factory) do
            problem '\'Formula.factory(name)\' is deprecated in favor of \'Formula[name]\''
          end
    
      def add_mac_dependency?(args)
    args.each { |key, version| args[key] = OS::Mac::Version.from_symbol(version) }
    
    describe Formula do
  describe '#uses_from_macos' do
    before do
      allow(OS).to receive(:mac?).and_return(false)
    end
    
      describe '#uses_from_macos' do
    it 'allows specifying dependencies', :needs_linux do
      subject.uses_from_macos('foo')
    
          raise CaskError, 'Cannot create metadata path with empty version.' if cask_version.empty?
    
        context 'when URL file is in middle' do
      let(:url) { 'https://example.com/foo.tar.gz/from/this/mirror' }
    
      def install
    start_time = Time.now
    if !formula.bottle_unneeded? && !pour_bottle? && DevelopmentTools.installed?
      Homebrew::Install.perform_build_from_source_checks
    end
    
          before do
        subject.perform
      end
    
      def eligible_users
    User.emailable
        .where('current_sign_in_at < ?', (FREQUENCY + SIGN_IN_OFFSET).ago)
        .where('last_emailed_at IS NULL OR last_emailed_at < ?', FREQUENCY.ago)
  end
end

    
      def set_poll
    @poll = Poll.attached.find(params[:id])
    authorize @poll.status, :show?
  rescue Mastodon::NotPermittedError
    raise ActiveRecord::RecordNotFound
  end
    
      describe 'GET #show' do
    let(:poll) { Fabricate(:poll, status: Fabricate(:status, visibility: visibility)) }
    
      def unread_message_count
    ConversationVisibility.where(person_id: self.person_id).sum(:unread)
  end
    
        def recheck
      pod = Pod.find(params[:pod_id])
      pod.test_connection!
    
      def weekly_user_stats
    @created_users_by_week = Hash.new{ |h,k| h[k] = [] }
    @created_users = User.where('username IS NOT NULL and created_at IS NOT NULL')
    @created_users.find_each do |u|
      week = u.created_at.beginning_of_week.strftime('%Y-%m-%d')
      @created_users_by_week[week] << u.username
    end
    
          rescue_from OpenSSL::SSL::SSLError do |e|
        validation_fail_as_json(e)
      end
    
      def create
    # Contacts autocomplete does not work the same way on mobile and desktop
    # Mobile returns contact ids array while desktop returns person id
    # This will have to be removed when mobile autocomplete is ported to Typeahead
    recipients_param, column = [%i(contact_ids id), %i(person_ids person_id)].find {|param, _| params[param].present? }
    if recipients_param
      person_ids = current_user.contacts.mutual.where(column => params[recipients_param].split(',')).pluck(:person_id)
    end
    
      def update
    note = Notification.where(:recipient_id => current_user.id, :id => params[:id]).first
    if note
      note.set_read_state(params[:set_unread] != 'true' )
    
        def URIEncodePair(cc1, cc2, result, index)
      u = ((cc1 >> 6) & 0xF) + 1;
      w = (cc1 >> 2) & 0xF;
      x = cc1 & 3;
      y = (cc2 >> 6) & 0xF;
      z = cc2 & 63;
      octets = Array.new(4);
      octets[0] = (u >> 2) + 240;
      octets[1] = (((u & 3) << 4) | w) + 128;
      octets[2] = ((x << 4) | y) + 128;
      octets[3] = z + 128;
      return URIEncodeOctets(octets, result, index);
    end
    
          # Finds header node inside Nokogiri::HTML document.
      #
      def find_header_node(doc)
        case @page.format
          when :asciidoc
            doc.css('div#gollum-root > h1:first-child')
          when :org
            doc.css('div#gollum-root > p.title:first-child')
          when :pod
            doc.css('div#gollum-root > a.dummyTopAnchor:first-child + h1')
          when :rest
            doc.css('div#gollum-root > div > div > h1:first-child')
          else
            doc.css('div#gollum-root > h1:first-child')
        end
      end
    
      s.add_development_dependency 'rack-test', '~> 0.6.2'
  s.add_development_dependency 'shoulda', '~> 3.5.0'
  s.add_development_dependency 'minitest-reporters', '~> 0.14.16'
  s.add_development_dependency 'twitter_cldr', '~> 3.2.0'
  s.add_development_dependency 'mocha', '~> 1.1.0'
  s.add_development_dependency 'test-unit', '~> 3.1.0'
  s.add_development_dependency 'webrick', '~> 1.3.1'
    
    # external
require 'github/markup'
require 'sanitize'
    
        it 'allows option overrides' do
      q = Sidekiq::Queue.new('bar')
      assert_equal 0, q.size
      assert SetWorker.set(queue: :bar).perform_async(1)
      job = q.first
      assert_equal 'bar', job['queue']
      assert_equal 12, job['retry']
    end
    
        it 'schedules jobs' do
      ss = Sidekiq::ScheduledSet.new
      ss.clear
    
            # Specify a default error formatter.
        def default_error_formatter(new_formatter_name = nil)
          if new_formatter_name
            new_formatter = Grape::ErrorFormatter.formatter_for(new_formatter_name, {})
            namespace_inheritable(:default_error_formatter, new_formatter)
          else
            namespace_inheritable(:default_error_formatter)
          end
        end
    
            unless presenter || env[Grape::Env::GRAPE_ROUTING_ARGS].nil?
          # env['api.endpoint'].route does not work when the error occurs within a middleware
          # the Endpoint does not have a valid env at this moment
          http_codes = env[Grape::Env::GRAPE_ROUTING_ARGS][:route_info].http_codes || []