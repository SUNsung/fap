
        
            You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
        keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      def describe_python
    python = which 'python'
    return 'N/A' if python.nil?
    python_binary = Utils.popen_read python, '-c', 'import sys; sys.stdout.write(sys.executable)'
    python_binary = Pathname.new(python_binary).realpath
    if python == python_binary
      python
    else
      '#{python} => #{python_binary}'
    end
  end
    
    class Formula
  include FormulaCompat
  extend FormulaCompat
    
      context 'with a user' do
    let(:user) { Fabricate(:user) }
    
    [
  [Badge::Appreciated, 'Appreciated', BadgeType::Bronze, 1, 20],
  [Badge::Respected,   'Respected',   BadgeType::Silver, 2, 100],
  [Badge::Admired,     'Admired',     BadgeType::Gold,   5, 300],
].each do |id, name, level, like_count, post_count|
  Badge.seed do |b|
    b.id = id
    b.name = name
    b.default_icon = 'fa-heart'
    b.badge_type_id = level
    b.query = BadgeQueries.liked_posts(post_count, like_count)
    b.default_badge_grouping_id = BadgeGrouping::Community
    b.trigger = Badge::Trigger::None
    b.auto_revoke = false
    b.system = true
  end
end
    
      def show
    render json: collection_presenter,
           serializer: ActivityPub::CollectionSerializer,
           adapter: ActivityPub::Adapter,
           content_type: 'application/activity+json',
           skip_activities: true
  end
    
        def require_local_account!
      redirect_to admin_account_path(@account.id) unless @account.local? && @account.user.present?
    end
    
        def check_confirmation
      if @user.confirmed?
        flash[:error] = I18n.t('admin.accounts.resend_confirmation.already_confirmed')
        redirect_to admin_accounts_path
      end
    end
  end
end

    
          emoji = CustomEmoji.find_or_initialize_by(domain: nil,
                                                shortcode: @custom_emoji.shortcode)
      emoji.image = @custom_emoji.image
    
        def ordered_instances
      paginated_instances.map { |account| Instance.new(account) }
    end
    
      def account_feed_path?
    hub_topic_params[:controller] == 'accounts' && hub_topic_params[:action] == 'show' && hub_topic_params[:format] == 'atom'
  end
end

    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
    end
  end