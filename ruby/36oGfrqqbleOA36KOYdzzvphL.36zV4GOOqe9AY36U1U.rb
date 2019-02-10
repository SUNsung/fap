
        
                expect(result).to eq('carthage bootstrap --configuration Release')
      end
    
        str = str.dup
    
        @statuses = @account.statuses.permitted_for(@account, signed_request_account)
    @statuses = params[:min_id].present? ? @statuses.paginate_by_min_id(LIMIT, params[:min_id]).reverse : @statuses.paginate_by_max_id(LIMIT, params[:max_id])
    @statuses = cache_collection(@statuses, Status)
  end
    
        def set_account
      @account = Account.find(params[:account_id])
      @user = @account.user
    end
    
        def set_filter_params
      @filter_params = filter_params.to_hash.symbolize_keys
    end
    
    module Admin
  class EmailDomainBlocksController < BaseController
    before_action :set_email_domain_block, only: [:show, :destroy]
    
    Given(/^(\d+) valid existing releases$/) do |num|
  a_day = 86_400 # in seconds
  offset = -(a_day * num.to_i)
  num.to_i.times do
    run_vagrant_command('mkdir -p #{TestApp.release_path(TestApp.timestamp(offset))}')
    offset += a_day
  end
end
    
        def install_plugin(plugin, load_hooks: true, load_immediately: false)
      installer.install(plugin,
                        load_hooks: load_hooks,
                        load_immediately: load_immediately)
    end
    
    # This example uses the API to create a package from local files
# it also creates necessary init-scripts and systemd files so our executable can be used as a service
    
        wordsize = case @architecture
    when nil, 'native'
      %x{getconf LONG_BIT}.chomp # 'native' is current arch
    when 'amd64'
      '64'
    when 'i386'
      '32'
    else
      %x{getconf LONG_BIT}.chomp # default to native, the current arch
    end
    
      option '--channel', 'CHANNEL_URL',
    'The pear channel url to use instead of the default.'
    
        safesystem('tar', *args)