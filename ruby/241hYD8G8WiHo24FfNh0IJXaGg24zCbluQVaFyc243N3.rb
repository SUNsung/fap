
        
            assert_dom_equal '<script>\n//<![CDATA[\nalert('hello')\n//]]>\n</script>',
      javascript_tag('alert('hello')')
    
      private
    def dashbord_url(id, message)
      url_for action: 'dashboard', params: { 'id' => id, 'message' => message }
    end
end
    
        # Use the logger configured for ActionMailer::Base.
    def logger
      ActionMailer::Base.logger
    end
  end
end
    
    class AMLogSubscriberTest < ActionMailer::TestCase
  include ActiveSupport::LogSubscriber::TestHelper
    
    # You can also do other things. Examples:
# https://github.com/tmm1/stackprof/blob/master/bin/stackprof
report = StackProf::Report.new(Marshal.load(IO.binread(PROF_OUTPUT_FILE)))
report.print_text(
  options[:sort],
  options[:limit],
  options[:select_files],
  options[:reject_files],
  options[:select_names],
  options[:reject_names]
)
    
          # Group an array of items by an expression
      #
      # input - the object array
      # variable - the variable to assign each item to in the expression
      # expression -a Liquid comparison expression passed in as a string
      #
      # Returns the filtered array of objects
      def group_by_exp(input, variable, expression)
        return input unless groupable?(input)
    
          private
    
        #
    
        # Create an instance of this class.
    #
    # site - the instance of Jekyll::Site we're concerned with
    #
    # Returns nothing
    def initialize(site)
      @site = site
    end
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def relative_path_from(url)
      self.class.parse(url).relative_path_to(self)
    end
  end
end

    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
    def each_schema_load_environment
  # If we're in development, also run this for the test environment.
  # This is a somewhat hacky way to do this, so here's why:
  # 1. We have to define this before we load the schema, or we won't
  #    have a timestamp_id function when we get to it in the schema.
  # 2. db:setup calls db:schema:load_if_ruby, which calls
  #    db:schema:load, which we define above as having a prerequisite
  #    of this task.
  # 3. db:schema:load ends up running
  #    ActiveRecord::Tasks::DatabaseTasks.load_schema_current, which
  #    calls a private method `each_current_configuration`, which
  #    explicitly also does the loading for the `test` environment
  #    if the current environment is `development`, so we end up
  #    needing to do the same, and we can't even use the same method
  #    to do it.
    
          it 'sets a regeneration marker while regenerating' do
        allow(RegenerationWorker).to receive(:perform_async)
        get :show