
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
    require 'benchmark/ips'
require 'jekyll'
require 'json'
    
    Mercenary.program(:jekyll) do |p|
  p.version Jekyll::VERSION
  p.description 'Jekyll is a blog-aware, static site generator in Ruby'
  p.syntax 'jekyll <subcommand> [options]'
    
            # Setup and normalize the configuration:
        #   * Create Kramdown if it doesn't exist.
        #   * Set syntax_highlighter, detecting enable_coderay and merging
        #       highlighter if none.
        #   * Merge kramdown[coderay] into syntax_highlighter_opts stripping coderay_.
        #   * Make sure `syntax_highlighter_opts` exists.
    
      EmailToken.where(user_id: smoke_user.id).update_all(confirmed: true)
end

    
          if staff.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('staff_category_description'),
          title: I18n.t('category.topic_prefix', category: staff.name),
          category: staff.name,
          archetype: Archetype.default
        )
        post = creator.create
    
          it 'allows you to force the tag creation' do
        tag = '2.0.0'
        message = 'message'
    
        def relative_url_string?(str)
      str !~ SCHEME_RGX && !fragment_url_string?(str) && !data_url_string?(str)
    end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        delegate :empty?, :blank?, to: :pages
    
            location_badge = at_css('.location-badge')
        if location_badge && doc.last_element_child != location_badge
          doc.last_element_child.after(location_badge)
        end
    
            css('.toplang', '#quickview', '.top').remove
    
      it 'raises a TypeError when passed a String' do
    lambda { sleep('2')   }.should raise_error(TypeError)
  end
    
      platform_is_not :windows do
    it 'does not expand shell variables when given multiples arguments' do
      lambda { @object.system('echo', @shell_var) }.should output_to_fd('#{@shell_var}\n')
    end
  end
    
      it 'returns true when passed ?R if the argument is readable by the real uid' do
    Kernel.test(?R, @file).should be_true
  end
    
      it 'raises ArgumentError if no block or proc is provided' do
    lambda do
      trace_var :$Kernel_trace_var_global
    end.should raise_error(ArgumentError)
  end
end
