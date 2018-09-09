
        
          def upgrade_account
    if signed_request_account.ostatus?
      signed_request_account.update(last_webfingered_at: nil)
      ResolveAccountWorker.perform_async(signed_request_account.acct)
    end
    
    module Admin
  class AccountModerationNotesController < BaseController
    before_action :set_account_moderation_note, only: [:destroy]
    
        def require_local_account!
      redirect_to admin_account_path(@account.id) unless @account.local? && @account.user.present?
    end
    
        def paginated_instances
      filtered_instances.page(params[:page])
    end
    
        # put the non-standard line terminations back to normal
    # gah.  not having look behinds suck,
    header.gsub!(/([^\r])\n/n,'\1' + '\r\n')
    
      # Puts a URI back together based on the URI parts
  def uri
    str = self.uri_parts['Resource'].dup || '/'
    
            # Sends a kerberos request through the connection
        #
        # @param req [Rex::Proto::Kerberos::Model::KdcRequest] the request to send
        # @return [Integer] the number of bytes sent
        # @raise [RuntimeError] if the transport protocol is unknown
        # @raise [NotImplementedError] if the transport protocol isn't supported
        def send_request(req)
          connect
    
        # Returns a new {Gem::Version} based on the systems `git` version.
    #
    # @return [Gem::Version]
    #
    def self.git_version
      raw_version = Executable.capture_command('git', ['--version']).first
      unless match = raw_version.scan(/\d+\.\d+\.\d+/).first
        raise 'Failed to extract git version from `git --version` (#{raw_version.inspect})'
      end
      Gem::Version.new(match)
    end
    
            def run
          if @pod_name.nil?
            # Note: at that point, @wipe_all is always true (thanks to `validate!`)
            # Remove all
            clear_cache
          else
            # Remove only cache for this pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            elsif cache_descriptors.count > 1 && !@wipe_all
              # Ask which to remove
              choices = cache_descriptors.map { |c| '#{@pod_name} v#{c[:version]} (#{pod_type(c)})' }
              index = UI.choose_from_array(choices, 'Which pod cache do you want to remove?')
              remove_caches([cache_descriptors[index]])
            else
              # Remove all found cache of this pod
              remove_caches(cache_descriptors)
            end
          end
        end