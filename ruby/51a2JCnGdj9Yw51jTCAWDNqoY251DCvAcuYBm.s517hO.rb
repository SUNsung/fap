
        
          def all_signed_out?
    users = Devise.mappings.keys.map { |s| warden.user(scope: s, run_callbacks: false) }
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
          # Sign in a user bypassing the warden callbacks and stores the user
      # straight in session. This option is useful in cases the user is already
      # signed in, but we want to refresh the credentials in session.
      #
      # Examples:
      #
      #   bypass_sign_in @user, scope: :user
      #   bypass_sign_in @user
      def bypass_sign_in(resource, scope: nil)
        scope ||= Devise::Mapping.find_scope!(resource)
        expire_data_after_sign_in!
        warden.session_serializer.store(resource, scope)
      end
    
        def recall
      header_info = if relative_url_root?
        base_path = Pathname.new(relative_url_root)
        full_path = Pathname.new(attempted_path)
    
    module Homebrew
  module_function
    
        link_dir('share', mode) do |relative_path|
      case relative_path.to_s
      when 'locale/locale.alias' then :skip_file
      when INFOFILE_RX then :info
      when LOCALEDIR_RX then :mkpath
      when %r{^icons/.*/icon-theme\.cache$} then :skip_file
      # all icons subfolders should also mkpath
      when %r{^icons/} then :mkpath
      when /^zsh/ then :mkpath
      when /^fish/ then :mkpath
      # Lua, Lua51, Lua53 all need the same handling.
      when %r{^lua/} then :mkpath
      when %r{^guile/} then :mkpath
      when *SHARE_PATHS then :mkpath
      else :link
      end
    end
    
    RSpec::Matchers.define_negated_matcher :not_to_output, :output
RSpec::Matchers.alias_matcher :have_failed, :be_failed
RSpec::Matchers.alias_matcher :a_string_containing, :include
    
    class FixPhotosShareVisibilities < ActiveRecord::Migration[4.2]
  class Photo < ApplicationRecord
  end
    
    When /^I put in my password in '([^']*)'$/ do |field|
 step %(I fill in '#{field}' with '#{@me.password}')
end
    
    When /^I toggle nsfw posts$/ do
  find('.toggle_nsfw_state', match: :first).click
end
    
      def login_page
    path_to 'the new user session page'
  end
    
      def fill_in_new_user_form
    @username = 'ohai'
    fill_in('user_email', with: '#{@username}@example.com')
    fill_in('user_username', with: @username)
    fill_in('user_password', with: 'secret')
    fill_in('user_password_confirmation', with: 'secret')
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
          sign_in alice, scope: :user
    end
    
          it 'doesn't post' do
        expect(alice).not_to receive(:like!)
        post :create, params: like_hash
        expect(response.code).to eq('422')
      end
    end