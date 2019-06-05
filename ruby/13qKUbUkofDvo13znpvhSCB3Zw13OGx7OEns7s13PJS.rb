
        
          # Check if there is no signed in user before doing the sign out.
  #
  # If there is no signed in user, it will set the flash message and redirect
  # to the after_sign_out path.
  def verify_signed_out_user
    if all_signed_out?
      set_flash_message! :notice, :already_signed_out
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
            if options[:bypass]
          ActiveSupport::Deprecation.warn(<<-DEPRECATION.strip_heredoc, caller)
          [Devise] bypass option is deprecated and it will be removed in future version of Devise.
          Please use bypass_sign_in method instead.
          Example:
    
        def default_constraints(options)
      @constraints = Hash.new
      @constraints.merge!(options[:constraints]) if options[:constraints]
    end
    
                authentication_keys_changed || encrypted_password_changed
          end
        else
          def clear_reset_password_token?
            encrypted_password_changed = respond_to?(:encrypted_password_changed?) && encrypted_password_changed?
            authentication_keys_changed = self.class.authentication_keys.any? do |attribute|
              respond_to?('#{attribute}_changed?') && send('#{attribute}_changed?')
            end
    
    require 'devise/strategies/rememberable'
require 'devise/hooks/rememberable'
require 'devise/hooks/forgetable'
    
    public_dir      = 'public'    # compiled site directory
source_dir      = 'source'    # source file directory
blog_index_dir  = 'source'    # directory for your blog's index page (if you put your index in source/blog/index.html, set this to 'source/blog')
deploy_dir      = '_deploy'   # deploy directory (for Github pages deployment)
stash_dir       = '_stash'    # directory to stash posts for speedy generation
posts_dir       = '_posts'    # directory for blog files
themes_dir      = '.themes'   # directory for blog files
new_post_ext    = 'markdown'  # default new post file extension when using the new_post task
new_page_ext    = 'markdown'  # default new page file extension when using the new_page task
server_port     = '4000'      # port for preview server eg. localhost:4000
    
        def script_url_for(gist_id, filename)
      url = 'https://gist.github.com/#{gist_id}.js'
      url = '#{url}?file=#{filename}' unless filename.nil? or filename.empty?
      url
    end
    
    module Jekyll
    
    
    
        private