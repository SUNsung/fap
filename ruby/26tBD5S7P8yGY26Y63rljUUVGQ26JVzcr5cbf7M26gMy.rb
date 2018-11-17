
        
              xcode_outdated = false
      begin
        unless FastlaneCore::Helper.xcode_at_least?(Fastlane::MINIMUM_XCODE_RELEASE)
          xcode_outdated = true
        end
      rescue
        # We don't care about exceptions here
        # We'll land here if the user doesn't have Xcode at all for example
        # which is fine for someone who uses fastlane just for Android project
        # What we *do* care about is when someone links an old version of Xcode
      end
    
          it 'default use case is boostrap' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage
          end').runner.execute(:test)
    
          it 'handles no extension or extensions parameters' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path.shellescape}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: '#{path}')
          end').runner.execute(:test)
        end
      end
    
    module Gitlab
  module GithubImport
    # HTTP client for interacting with the GitHub API.
    #
    # This class is basically a fancy wrapped around Octokit while adding some
    # functionality to deal with rate limiting and parallel imports. Usage is
    # mostly the same as Octokit, for example:
    #
    #     client = GithubImport::Client.new('hunter2')
    #
    #     client.labels.each do |label|
    #       puts label.name
    #     end
    class Client
      include ::Gitlab::Utils::StrongMemoize
    
            def collection_method
          :lfs_objects
        end
    
          def cache_key_iid
        if object.respond_to?(:noteable_id)
          object.noteable_id
        elsif object.respond_to?(:iid)
          object.iid
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    end
  end
end

    
            alias_method :issuable_type, :noteable_type
      end
    end
  end
end

    
            def truncated_title
          title.truncate(255)
        end
    
            attr_reader :attributes
    
      # Check if there is no signed in user before doing the sign out.
  #
  # If there is no signed in user, it will set the flash message and redirect
  # to the after_sign_out path.
  def verify_signed_out_user
    if all_signed_out?
      set_flash_message! :notice, :already_signed_out
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
                bypass_sign_in(user)
          DEPRECATION
          warden.session_serializer.store(resource, scope)
        elsif warden.user(scope) == resource && !options.delete(:force)
          # Do nothing. User already signed in and we are not forcing it.
          true
        else
          warden.set_user(resource, options.merge!(scope: scope))
        end
      end
    
          def stored_location_key_for(resource_or_scope)
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        '#{scope}_return_to'
      end
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
        helper_method :paginated_instances
    
        def create
      authorize ReportNote, :create?
    
      def future_expires
    Time.now.utc + lease_seconds_or_default
  end
    
        describe '#' do
      context 'applies to format o' do
        it 'increases the precision until the first digit will be `0' if it is not formatted as complements' do
          format('%#o', 87).should == '0127'
        end
    
      it 'raises a TypeError when passed a String' do
    lambda { sleep('2')   }.should raise_error(TypeError)
  end
    
        $?.should be_an_instance_of Process::Status
    $?.success?.should == true
  end
    
      it 'does not append line-end if last character is line-end' do
    lambda {
      $VERBOSE = true
      warn('this is some simple text with line-end\n')
    }.should output(nil, 'this is some simple text with line-end\n')
  end
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
            # TODO: this preserves historical behavior, but it's possible
        # :filename should be either normalized to the native format
        # or consistently URI-format.
        full_filename = full_filename.tr('\\', '/') if Sass::Util.windows?