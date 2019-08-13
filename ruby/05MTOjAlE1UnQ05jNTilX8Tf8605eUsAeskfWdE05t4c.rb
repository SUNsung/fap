
        
          def after_omniauth_failure_path_for(scope)
    new_session_path(scope)
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
    
        # Creates configuration values for Devise and for the given module.
    #
    #   Devise::Models.config(Devise::Models::DatabaseAuthenticatable, :stretches)
    #
    # The line above creates:
    #
    #   1) An accessor called Devise.stretches, which value is used by default;
    #
    #   2) Some class methods for your model Model.stretches and Model.stretches=
    #      which have higher priority than Devise.stretches;
    #
    #   3) And an instance method stretches.
    #
    # To add the class methods you need to have a module ClassMethods defined
    # inside the given class.
    #
    def self.config(mod, *accessors) #:nodoc:
      class << mod; attr_accessor :available_configs; end
      mod.available_configs = accessors
    
          module ClassMethods
        # Attempt to find a user by password reset token. If a user is found, return it
        # If a user is not found, return nil
        def with_reset_password_token(token)
          reset_password_token = Devise.token_generator.digest(self, :reset_password_token, token)
          to_adapter.find_first(reset_password_token: reset_password_token)
        end
    
              record = to_adapter.get(id)
          record if record && record.remember_me?(token, generated_at)
        end
    
        if (exploit_config and exploit_config['active_timeout'])
      ctimeout = exploit_config['active_timeout'].to_i
    end
    
            ; perform the call to WSAStartup...
        mov rdx, r13           ; second param is a pointer to this stuct
        push 0x0101            ;
        pop rcx                ; set the param for the version requested
        mov r10d, #{Rex::Text.block_api_hash('ws2_32.dll', 'WSAStartup')}
        call rbp               ; WSAStartup( 0x0101, &WSAData );
    
      private
    
      public class Exploit {
      public Exploit(){
          try {
              Payload.main(null);
          } catch (Exception e) { }
    }
    }
    
    end

    
      LogSource = 'core'
end
    
        prev_data_service = @current_data_service
    @current_data_service = data_service
    # reset the previous data service's active flag if it is remote
    # to ensure checks are performed the next time it is set
    if !prev_data_service.nil? && !prev_data_service.is_local?
      prev_data_service.active = false
    end
  end
    
    require 'msf/core/post/windows/services'
require 'msf/core/post/windows/powershell'
require 'msf/core/exploit/powershell/dot_net'
    
        print_good('Account Found:')
    line_num = 0
    
        begin
      net_com_opts[:harness] = ::File.read(datastore['SOURCE_FILE'])
      script = dot_net_compiler(net_com_opts)
      if datastore['Powershell::Post::dry_run']
        print_good 'Compiler code:\n#{script}'
        return
      end
    rescue => e
      print_error e
      return
    end
    
        def assign_attributes(values)
      values.each do |k, v|
        public_send('#{k}=', v)
      end
    end
    
    class HomeController < ApplicationController
  def show
    partial_dir = Rails.root.join('app', 'views', 'home')
    if user_signed_in?
      redirect_to stream_path
    elsif request.format == :mobile
      if partial_dir.join('_show.mobile.haml').exist? ||
         partial_dir.join('_show.mobile.erb').exist? ||
         partial_dir.join('_show.haml').exist?
        render :show
      else
        redirect_to user_session_path
      end
    elsif partial_dir.join('_show.html.haml').exist? ||
          partial_dir.join('_show.html.erb').exist? ||
          partial_dir.join('_show.haml').exist?
      render :show
    elsif Role.admins.any?
      render :default
    else
      redirect_to podmin_path
    end
  end
    
          respond_to do |format|
        format.json { render :json => { :guid => note.id, :unread => note.unread } }
      end
    
          def left_diff_line_number(id, line)
        if line =~ /^@@/
          m, li                  = *line.match(/\-(\d+)/)
          @left_diff_line_number = li.to_i
          @current_line_number   = @left_diff_line_number
          ret                    = '...'
        elsif line[0] == ?-
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        elsif line[0] == ?+
          ret = ' '
        else
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        end
        ret
      end
    
          def is_edit_page
        false
      end
    
        assert_no_match /Edit Page/,             last_response.body, ''Edit Page' link not blocked in compare template'
    assert_no_match /Revert Changes/,        last_response.body, ''Revert Changes' link not blocked in compare template'
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, false