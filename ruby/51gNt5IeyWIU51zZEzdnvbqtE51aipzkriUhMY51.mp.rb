
        
          # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
      def search_taps(rx)
    SEARCHABLE_TAPS.map do |user, repo|
      Thread.new { search_tap(user, repo, rx) }
    end.inject([]) do |results, t|
      results.concat(t.value)
    end
  end
    
        initial_revision = ENV['HOMEBREW_UPDATE_BEFORE'].to_s
    current_revision = ENV['HOMEBREW_UPDATE_AFTER'].to_s
    if initial_revision.empty? || current_revision.empty?
      odie 'update-report should not be called directly!'
    end
    
    end

    
      def grant_moderation!
    set_permission('moderator', true)
  end
    
      protected
    
        # Returns the current git branch - can be replaced using the environment variable `GIT_BRANCH`
    def self.git_branch
      return ENV['GIT_BRANCH'] if ENV['GIT_BRANCH'].to_s.length > 0 # set by Jenkins
      s = Actions.sh('git rev-parse --abbrev-ref HEAD', log: false).chomp
      return s.to_s.strip if s.to_s.length > 0
      nil
    rescue
      nil
    end
    
          it 'renders HTML' do
        capture = render(options, screenshots)
        expect(capture).to match(/<html>/)
        expect(capture).to include('<li>Some</li>')
        expect(capture).to include('<li>key</li>')
        expect(capture).to include('<li>words</li>')
      end
    end
    
            command = [escaped_gradle_path, 'tasks', '--console=plain'].join(' ')
        output = Action.sh(command, print_command: false, print_command_output: false)
        output.split('\n').each do |line|
          if (result = line.match(/(\w+)\s\-\s([\w\s]+)/))
            self.tasks << GradleTask.new(title: result[1], description: result[2])
          end
        end
    
      protected
    
        if resource.errors.empty?
      resource.unlock_access! if unlockable?(resource)
      if Devise.sign_in_after_reset_password
        flash_message = resource.active_for_authentication? ? :updated : :updated_not_active
        set_flash_message!(:notice, flash_message)
        sign_in(resource_name, resource)
      else
        set_flash_message!(:notice, :updated_not_active)
      end
      respond_with resource, location: after_resetting_password_path_for(resource)
    else
      set_minimum_password_length
      respond_with resource
    end
  end
    
      def respond_to_on_destroy
    # We actually need to hardcode this as Rails default responder doesn't
    # support returning empty response on GET request
    respond_to do |format|
      format.all { head :no_content }
      format.any(*navigational_formats) { redirect_to after_sign_out_path_for(resource_name) }
    end
  end
end

    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
      it 'wraps with Data_Wrap_Struct and Data_Get_Struct returns data' do
    a = @s.wrap_struct(1024)
    @s.get_struct(a).should == 1024
  end
    
      describe 'with an argument that responds to #to_r' do
    it 'coerces using #to_r' do
      o = mock_numeric('rational')
      o.should_receive(:to_r).and_return(Rational(7201, 2))
      t = Time.gm(2007, 1, 9, 12, 0, 0)
      t.localtime(o)
      t.should == Time.new(2007, 1, 9, 13, 0, Rational(1, 2), Rational(7201, 2))
      t.utc_offset.should eql(Rational(7201, 2))
    end
  end
    
      def test_vendor_missing
    orig_vendordir = RbConfig::CONFIG['vendordir']
    RbConfig::CONFIG.delete 'vendordir'
    
      def test_verify_certificate_message_INVALID_CA
    error_number = OpenSSL::X509::V_ERR_INVALID_CA
    
      def test_asia_singapore
    with_tz(tz='Asia/Singapore') {
      assert_time_constructor(tz, '1981-12-31 23:59:59 +0730', :local, [1981,12,31,23,59,59])
      assert_time_constructor(tz, '1982-01-01 00:30:00 +0800', :local, [1982,1,1,0,0,0])
      assert_time_constructor(tz, '1982-01-01 00:59:59 +0800', :local, [1982,1,1,0,29,59])
      assert_time_constructor(tz, '1982-01-01 00:30:00 +0800', :local, [1982,1,1,0,30,0])
    }
  end
    
          it 'sets the regeneration marker to expire' do
        allow(RegenerationWorker).to receive(:perform_async)
        get :show
        expect(Redis.current.ttl('account:#{user.account_id}:regeneration')).to be >= 0
      end
    
        def empty_file?
      File.exist?(@filepath) && File.size(@filepath) == 0
    end
    
            def no_error_when_valid?
          @file = StringIO.new('.')
          @subject.send(@attachment_name).assign(@file)
          @subject.valid?
          expected_message = [
            @attachment_name.to_s.titleize,
            I18n.t(:blank, scope: [:errors, :messages])
          ].join(' ')
          @subject.errors.full_messages.exclude?(expected_message)
        end
      end
    end
  end
end

    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end