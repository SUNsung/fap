
        
          def fixopt(f)
    path = if f.linked_keg.directory? && f.linked_keg.symlink?
      f.linked_keg.resolved_path
    elsif f.prefix.directory?
      f.prefix
    elsif (kids = f.rack.children).size == 1 && kids.first.directory?
      kids.first
    else
      raise
    end
    Keg.new(path).optlink
  rescue StandardError
    raise '#{f.opt_prefix} not present or broken\nPlease reinstall #{f.full_name}. Sorry :('
  end
end
    
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

    
            EOS
      s << '    LDFLAGS:  -L#{f.opt_lib}\n' if f.lib.directory?
      s << '    CPPFLAGS: -I#{f.opt_include}\n' if f.include.directory?
    end
    s << '\n'
  end
    
        def self.cleanup_logs
      return unless HOMEBREW_LOGS.directory?
      HOMEBREW_LOGS.subdirs.each do |dir|
        cleanup_path(dir) { dir.rmtree } if prune?(dir, :days_default => 14)
      end
    end
    
      def describe_java
    java_xml = Utils.popen_read('/usr/libexec/java_home', '--xml', '--failfast')
    return 'N/A' unless $?.success?
    javas = []
    REXML::XPath.each(REXML::Document.new(java_xml), '//key[text()='JVMVersion']/following-sibling::string') do |item|
      javas << item.text
    end
    javas.uniq.join(', ')
  end
    
        if ARGV.include? '--list-checks'
      puts checks.all.sort
      exit
    end
    
    module Homebrew
  def list
    # Use of exec means we don't explicitly exit
    list_unbrewed if ARGV.flag? '--unbrewed'
    
      def outbox_presenter
    if page_requested?
      ActivityPub::CollectionPresenter.new(
        id: account_outbox_url(@account, page_params),
        type: :ordered,
        part_of: account_outbox_url(@account),
        prev: prev_page,
        next: next_page,
        items: @statuses
      )
    else
      ActivityPub::CollectionPresenter.new(
        id: account_outbox_url(@account),
        type: :ordered,
        size: @account.statuses_count,
        first: account_outbox_url(@account, page: true),
        last: account_outbox_url(@account, page: true, min_id: 0)
      )
    end
  end
    
          weeks << {
        week: week.to_time.to_i.to_s,
        statuses: Redis.current.get('activity:statuses:local:#{week_id}') || '0',
        logins: Redis.current.pfcount('activity:logins:#{week_id}').to_s,
        registrations: Redis.current.get('activity:accounts:local:#{week_id}') || '0',
      }
    end
    
      def set_web_push_subscription
    @web_subscription = ::Web::PushSubscription.find_by(access_token_id: doorkeeper_token.id)
  end
    
      def update
    setting.data = params[:data]
    setting.save!
    
              if @order.update_from_params(params, permitted_checkout_attributes, request.headers.env)
            if current_api_user.has_spree_role?('admin') && user_id.present?
              @order.associate_user!(Spree.user_class.find(user_id))
            end
    
            def image_params
          params.require(:image).permit(permitted_image_attributes)
        end
    
            def property_params
          params.require(:property).permit(permitted_property_attributes)
        end
      end
    end
  end
end

    
            def jstree
          show
        end
    
            private
    
            def index
          @zones = Zone.accessible_by(current_ability, :read).order('name ASC').ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@zones)
        end
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end