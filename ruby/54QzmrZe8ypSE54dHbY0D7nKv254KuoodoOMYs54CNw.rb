
        
        def global_require
  JSON.pretty_generate(DATA)
end
    
      def handle_spam
    if @spam
      GroupMessage.create(Group[:moderators].name,
                           :spam_post_blocked,
                           user: @user,
                           limit_once_per: 24.hours,
                           message_params: { domains: @post.linked_hosts.keys.join(', ') })
    elsif @post && errors.blank? && !skip_validations?
      SpamRule::FlagSockpuppets.new(@post).perform
    end
  end
    
        # topics isn't indexed on `reviewable_score` and doesn't know what the current user can see,
    # so let's query from the inside out.
    pending = Reviewable.viewable_by(current_user).pending
    pending = pending.where('score >= ?', Reviewable.min_score_for_priority)
    
        @s3_client.stub_responses(:delete_object, -> (context) do
      check_context(context)
    
        if text = I18n.t('reviewables.reasons.#{object.reason}', base_url: Discourse.base_url, default: nil)
      # Create a convenient link to any site settings if the user is staff
      settings_url = '#{Discourse.base_url}/admin/site_settings/category/all_results?filter='
    
            before do
          SiteSetting.staff_edit_locks_post = true
        end
    
        def xpath(*args)
      doc.xpath(*args)
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        private
    
        def process_response?(response)
      raise NotImplementedError
    end
    
        private
    
            css('.status-badge').each do |node|
          node.name = 'code'
          node.content = node.content.strip
          node.remove_attribute('class')
        end
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
      def get_privs
    if client.sys.config.is_system?
      print_good('Running as SYSTEM')
    else
      print_warning('Not currently running as SYSTEM')
      print_status('Attempting to getprivs ...')
      privs = client.sys.config.getprivs
    
          if (rhost == nil)
        raise ArgumentError,
          'RHOST is not defined; bind stager cannot function.',
          caller
      end
    
      #
  # Constructs the payload
  #
  def generate
    return super + command_string
  end
    
        if opts[:exitfunk]
      asm << asm_exitfunk(opts)
    end
    
        pdf_urls = []
    urls.each_with_index do |url, index|
      next if url.blank?
      html = download url
      next if html.blank?
      doc = Nokogiri::HTML html
      doc.search('a[href]').select { |n| n['href'][/(\.pdf$|\.pdf\?)/] }.map do |n|
        pdf_urls << URI.join(url, n['href']).to_s
      end
      progress(index + 1, urls.size)
    end
    
      def initialize(info = {})
    super(update_info(
              info,
              'Name' => 'Allegro Software RomPager 'Misfortune Cookie' (CVE-2014-9222) Authentication Bypass',
              'Description' => %q(
        This module exploits HTTP servers that appear to be vulnerable to the
        'Misfortune Cookie' vulnerability which affects Allegro Software
        Rompager versions before 4.34 and can allow attackers to authenticate
        to the HTTP service as an administrator without providing valid
        credentials.
      ),
              'Author' => [
                  'Jon Hart <jon_hart[at]rapid7.com>', # metasploit scanner module
                  'Jan Trencansky <jan.trencansky[at]gmail.com>', # metasploit auxiliary admin module
                  'Lior Oppenheim' # CVE-2014-9222
              ],
              'References' => [
                  ['CVE', '2014-9222'],
                  ['URL', 'http://mis.fortunecook.ie'],
                  ['URL', 'http://mis.fortunecook.ie/misfortune-cookie-suspected-vulnerable.pdf'], # list of likely vulnerable devices
                  ['URL', 'http://mis.fortunecook.ie/too-many-cooks-exploiting-tr069_tal-oppenheim_31c3.pdf'] # 31C3 presentation with POC
              ],
              'DisclosureDate' => 'Dec 17 2014',
              'License' => MSF_LICENSE
          ))
    
        if @current_data_service == data_service
      # set the current data service to the first data service created
      @current_data_service = @data_services[1]
    end
  end
    
      def authenticate_with_two_factor_via_otp(user)
    if valid_otp_attempt?(user)
      session.delete(:otp_user_id)
      sign_in(user)
    else
      flash.now[:alert] = 'Invalid token'
      prompt_for_two_factor(user)
    end
  end
    
    puts 'Bundler configured! Please run 'bin/bundle install' now.'

    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count
    
          def validation_fail_as_json(e)
        render json: {error: :invalid_client_metadata, error_description: e.message}, status: 400
      end
    
        flash[:error] = if AppConfig.settings.invitations.open?
                      t('invitations.create.no_more')
                    else
                      t('invitations.create.closed')
                    end
    redirect_back fallback_location: stream_path
  end
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'zh-CN,zh;q=0.8,en-US;q=0.6,en;q=0.4,ru;q=0.2')
    assert_equal 'zh-cn', obj.locale
    
      def new_manager(opts)
    Sidekiq::Manager.new(opts)
  end
    
      describe 'with middleware' do
    before do
      require 'sidekiq/testing'
    end
    
        class InlineFooModel
      def self.bar(str)
        raise InlineError
      end
    end
    
        You can run `tmuxinator doctor` to make sure everything is set.
    Happy tmuxing with tmuxinator!
    
        def parsed_parameters(parameters)
      parameters.is_a?(Array) ? parameters.join('; ') : parameters
    end
    
          expect(instance.render).to match %r{wemux.ls.2>\/dev\/null}
    end
  end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
      it 'creates an instance' do
    expect(subject).to be_a(Tmuxinator::Pane)
  end
    
      describe '#tmux_has_session?' do
    context 'no active sessions' do
      before do
        cmd = '#{project.tmux_command} ls 2> /dev/null'
        resp = ''
        call_tmux_ls = receive(:`).with(cmd).at_least(:once).and_return(resp)
    
          def environment?
        File.directory?(environment)
      end
    
        let(:window_part) { 'new-window' }
    let(:name_part) { window.tmux_window_name_option }
    let(:target_part) { '-t #{window.tmux_window_target}' }
    let(:path_part) { '#{path_option} #{project.root}' }