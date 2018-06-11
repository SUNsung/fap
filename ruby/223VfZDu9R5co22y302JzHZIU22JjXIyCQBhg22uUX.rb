
        
            gem_dependency_check { defined?(EvernoteOAuth) && Devise.omniauth_providers.include?(:evernote) }
  end
    
      # Optional
  #   Override this method if you need to group multiple agents based on an API key,
  #   or server they connect to.
  #   Have a look at the TwitterStreamAgent for an example.
  def self.setup_worker; end
    
      def tumblr_consumer_secret
    ENV['TUMBLR_OAUTH_SECRET']
  end
    
        respond_to do |format|
      if !running? && @job.update_attributes!(run_at: Time.now, failed_at: nil)
        format.html { redirect_to jobs_path, notice: 'Job enqueued.' }
        format.json { render json: @job, status: :ok }
      else
        format.html { redirect_to jobs_path, alert: 'Can not enqueue a running job.' }
        format.json { render json: @job.errors, status: :unprocessable_entity }
      end
    end
  end
    
        bad = [
      5, true, false, nil,
      0.0, 1.72723e-77,
      :foo, 'dsym_#{self.object_id.to_s(16)}_#{Time.now.to_i.to_s(16)}'.to_sym,
      'str',
    ].select do |x|
      hash = {x => bug9381}
      hash[wrapper.new(x)] != bug9381
    end
    assert_empty(bad, bug9381)
  end
    
      it 'spawns a new Thread running the block' do
    run = false
    t = Thread.send(@method) { run = true }
    t.should be_kind_of(Thread)
    t.join
    
      it 'interprets pre-Gregorian reform dates using Gregorian proleptic calendar' do
    Time.send(@method, 1582, 10, 4, 12).to_i.should == -12220200000 # 2299150j
  end
    
        # .visible-sm { @include responsive-visibility() }
    # to:
    # @include responsive-visibility('.visible-sm')
    def apply_mixin_parent_selector(file, rule_sel)
      log_transform rule_sel
      replace_rules file, '\s*' + rule_sel, comments: false do |rule, rule_pos, css|
        body = unwrap_rule_block(rule.dup).strip
        next rule unless body =~ /^@include \w+/m || body =~ /^@media/ && body =~ /\{\s*@include/
        rule =~ /(#{COMMENT_RE}*)([#{SELECTOR_CHAR}\s*]+?)#{RULE_OPEN_BRACE_RE}/
        cmt, sel = $1, $2.strip
        # take one up selector chain if this is an &. selector
        if sel.start_with?('&')
          parent_sel = selector_for_pos(css, rule_pos.begin)
          sel        = parent_sel + sel[1..-1]
        end
        # unwrap, and replace @include
        unindent unwrap_rule_block(rule).gsub(/(@include [\w-]+)\(?([\$\w\-,\s]*)\)?/) {
          name, args = $1, $2
          sel.gsub(/\s+/, ' ').split(/,\s*/ ).map { |sel_part|
            '#{cmt}#{name}('#{sel_part}'#{', ' if args && !args.empty?}#{args})'
          }.join(';\n')
        }
      end
    end
    }
    
      # Full error reports are disabled and caching is turned on.
  config.consider_all_requests_local       = false
  config.action_controller.perform_caching = true
    
      config.active_support.test_order = :random
    
    desc 'Dumps output to a CSS file for testing'
task :debug do
  require 'sass'
  path = Bootstrap.stylesheets_path
  %w(bootstrap).each do |file|
    engine = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    File.open('./#{file}.css', 'w') { |f| f.write(engine.render) }
  end
end
    
            def log_level?(level, min_level)
          log_levels[level] >= log_levels[min_level]
        end
    
      require 'sass/plugin/rack'
  class Sass::Plugin::MerbBootLoader < Merb::BootLoader
    after Merb::BootLoader::RackUpApplication
    
        # @return [Boolean] Whether the original format of the interpolation was
    #   plain text, not an interpolation. This is used when converting back to
    #   SassScript.
    attr_reader :originally_text
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
  end
    
      # Run specs in random order to surface order dependencies. If you find an
  # order dependency and want to debug it, you can fix the order by providing
  # the seed, which is printed after each run.
  #     --seed 1234
  config.order = :random