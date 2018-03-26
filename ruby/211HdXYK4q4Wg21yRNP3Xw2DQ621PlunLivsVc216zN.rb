
        
          def present(payload)
    if payload.is_a?(Hash)
      payload = ActiveSupport::HashWithIndifferentAccess.new(payload)
      MAIN_KEYS.each do |key|
        return { :title => payload[key].to_s, :entries => present_hash(payload, key) } if payload.has_key?(key)
      end
    
      # Optional
  #   Override this method if you need to group multiple agents based on an API key,
  #   or server they connect to.
  #   Have a look at the TwitterStreamAgent for an example.
  def self.setup_worker; end
    
      def running?
    (@job.locked_at || @job.locked_by) && @job.failed_at.nil?
  end
end

    
        respond_to do |format|
      format.html
      format.json { render json: @user_credential }
    end
  end
    
                -- Finally, add our sequence number to our base, and chop
            -- it to the last two bytes
            tail := (
              (sequence_base + nextval(table_name || '_id_seq'))
              & 65535);
    
      if Rails.env == 'development'
    test_conf = ActiveRecord::Base.configurations['test']
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
    namespace :bower do
    
          def assert_valid_stage_names(names)
        invalid = names.find { |n| RESERVED_NAMES.include?(n) }
        return if invalid.nil?
    
        def after(task, post_task, *args, &block)
      Rake::Task.define_task(post_task, *args, &block) if block_given?
      task = Rake::Task[task]
      task.enhance do
        post = Rake.application.lookup(post_task, task.scope)
        raise ArgumentError, 'Task #{post_task.inspect} not found' unless post
        post.invoke
      end
    end
    
      # Read and eval a .rake file in such a way that `self` within the .rake file
  # refers to this plugin instance. This gives the tasks in the file access to
  # helper methods defined by the plugin.
  def eval_rakefile(path)
    contents = IO.read(path)
    instance_eval(contents, path, 1)
  end
    
      def execute
    validate_params
    source = File.join(File.dirname(__FILE__), 'templates', '#{type}-plugin')
    @target_path = File.join(path, full_plugin_name)
    FileUtils.mkdir(@target_path)
    puts ' Creating #{@target_path}'
    
      public
  def flush(&block)
    # does nothing by default.
    # if your codec needs a flush method (like you are spooling things)
    # you must implement this.
  end
    
          expect('.border-color-alternate').to have_rule(rule)
    end
  end
    
          expect('.border-style-explicit').to have_rule(rule)
    end
  end
    
          expect('.border-width-implied-left').to have_rule(rule)
    end
  end
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      rule = 'padding: 1px'