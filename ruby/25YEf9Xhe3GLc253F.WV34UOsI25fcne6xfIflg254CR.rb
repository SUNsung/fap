
        
              # Some providers have a lot (> 100) entries, which makes browsing them unwieldy.
      # Any present in the list below will have an extra set of types added, breaking the pages out into the different
      # products they offer.
      LARGE_PROVIDERS = {
        'aws'     => true,
        'azurerm' => true,
        'google'  => true,
      }
    
            css('hr', '.content-header', 'button', '.docs-alert').remove
    
          def additional_entries
        return [] if subpath.start_with?('users_guide')
        return [] if IGNORE_ENTRIES_PATHS.include?(subpath.split('/').last)
    
            doc
      end
    end
  end
end

    
            # Remove the link to the issue tracker
        css('.issue-tracker').remove
    
    class ActivityPub::Activity::Move < ActivityPub::Activity
  PROCESSING_COOLDOWN = 7.days.seconds
    
            expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(actor)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), actor, instance_of(Hash))
    
        it 'does not remove the following relation between user and target user' do
      expect(user.account.following?(other_account)).to be true
    end
    
          context '!limit_reached?' do
        let(:limit_reached) { false }
    
      def perform
    eligible_users.reorder(nil).find_each do |user|
      next unless user.allows_digest_emails?
      DigestMailerWorker.perform_async(user.id)
    end
  end
    
      it 'does still notify when sender\'s domain is blocked but sender is followed' do
    recipient.block_domain!(sender.domain)
    recipient.follow!(sender)
    is_expected.to change(Notification, :count)
  end
    
    World(RemoteCommandHelpers)

    
        private
    
          def scm_name
        fetch(:scm)
      end
    
    %i(git_strategy hg_strategy svn_strategy).each do |strategy|
  validate(strategy) do |key, _value|
    warn(
      '[Deprecation Warning] #{key} is deprecated and will be removed in '\
      'Capistrano 3.7.0.\n'\
      'https://github.com/capistrano/capistrano/blob/master/UPGRADING-3.7.md'
    )
  end
end
    
            return nil
      end
    end
  end
end end end

    
        def user_feedback_string_for(action, platform, machines, options={})
      experimental_string = options['experimental'] ? 'experimental' : 'non experimental'
      message  = '#{action} all #{experimental_string} VM's defined in acceptance/Vagrantfile'
      '#{message} for #{platform}: #{machines}' if !platform.nil?
    end
    
    default_vagrant_boxes = ( platform == 'all' ? config.platforms : config.filter_type(platform, {'experimental' => experimental}) )
    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
          def footer
        if @footer.nil?
          if page = @page.footer
            @footer = page.text_data
          else
            @footer = false
          end
        end
        @footer
      end
    
          def use_identicon
        @wiki.user_icons == 'identicon'
      end
    
    module Precious
  module Views
    class Layout < Mustache
      include Rack::Utils
      alias_method :h, :escape_html
    
    def testpath(path)
  File.join(TEST_DIR, path)
end
    
      test 'creates korean page which contains korean content' do
    post '/create', :content => '한글 text', :page => 'k',
         :format             => 'markdown', :message => 'def'
    follow_redirect!
    assert last_response.ok?
    
    # internal
require File.expand_path('../gollum/uri_encode_component', __FILE__)