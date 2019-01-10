
        
        def pre_pr(url)
  url[-1, 1] == FORWARD_SLASH ? url : File.dirname(url)
end
    
    require 'benchmark/ips'
require 'pathutil'
    
          #
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
            # For a description of the protocol see
        # http://feedback.livereload.com/knowledgebase/articles/86174-livereload-protocol
        def reload(pages)
          pages.each do |p|
            json_message = JSON.dump(
              :command => 'reload',
              :path    => p.url,
              :liveCSS => true
            )
    
      def std?
    @settings.include? :std
  end
    
      def dump_verbose_config(f = $stdout)
    f.puts 'HOMEBREW_VERSION: #{HOMEBREW_VERSION}'
    f.puts 'ORIGIN: #{origin}'
    f.puts 'HEAD: #{head}'
    f.puts 'Last commit: #{last_commit}'
    if CoreTap.instance.installed?
      f.puts 'Core tap ORIGIN: #{core_tap_origin}'
      f.puts 'Core tap HEAD: #{core_tap_head}'
      f.puts 'Core tap last commit: #{core_tap_last_commit}'
    else
      f.puts 'Core tap: N/A'
    end
    f.puts 'HOMEBREW_PREFIX: #{HOMEBREW_PREFIX}'
    f.puts 'HOMEBREW_REPOSITORY: #{HOMEBREW_REPOSITORY}'
    f.puts 'HOMEBREW_CELLAR: #{HOMEBREW_CELLAR}'
    f.puts 'HOMEBREW_BOTTLE_DOMAIN: #{BottleSpecification::DEFAULT_DOMAIN}'
    f.puts hardware
    f.puts 'OS X: #{MacOS.full_version}-#{kernel}'
    f.puts 'Xcode: #{xcode ? xcode : 'N/A'}'
    f.puts 'CLT: #{clt ? clt : 'N/A'}'
    f.puts 'GCC-4.0: build #{gcc_40}' if gcc_40
    f.puts 'GCC-4.2: build #{gcc_42}' if gcc_42
    f.puts 'LLVM-GCC: build #{llvm}'  if llvm
    f.puts 'Clang: #{clang ? '#{clang} build #{clang_build}' : 'N/A'}'
    f.puts 'MacPorts/Fink: #{macports_or_fink}' if macports_or_fink
    f.puts 'X11: #{describe_x11}'
    f.puts 'System Ruby: #{describe_system_ruby}'
    f.puts 'Perl: #{describe_perl}'
    f.puts 'Python: #{describe_python}'
    f.puts 'Ruby: #{describe_ruby}'
    f.puts 'Java: #{describe_java}'
  end
end

    
      def cxxstdlib_check(check_type)
    self.class.cxxstdlib_check check_type
  end
    
        def entries_as_json
      @entries.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
        def pipeline_context(response)
      options.merge url: response.url
    end
    
        def self.subscribe_to(notifier)
      attach_to(namespace, new, notifier)
    end
    
            css('pre').each do |node|
          node.content = node.content.strip
    
            subtitle = at_css('.hero-subtitle').try(:content)
        breadcrumbs = css('.breadcrumbs li').map(&:content)[2..-2]
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
        @statuses = @account.statuses.permitted_for(@account, signed_request_account)
    @statuses = params[:min_id].present? ? @statuses.paginate_by_min_id(LIMIT, params[:min_id]).reverse : @statuses.paginate_by_max_id(LIMIT, params[:max_id])
    @statuses = cache_collection(@statuses, Status)
  end
    
        def resource_params
      params.require(:custom_emoji).permit(:shortcode, :image, :visible_in_picker)
    end
    
      def verify_payload?
    payload.present? && VerifySalmonService.new.call(payload)
  end
    
        data = {
      alerts: {
        follow: alerts_enabled,
        favourite: alerts_enabled,
        reblog: alerts_enabled,
        mention: alerts_enabled,
      },
    }
    
      before_action :require_user!