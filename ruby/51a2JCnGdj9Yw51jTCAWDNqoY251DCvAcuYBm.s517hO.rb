
        
              configure_sass
    end
    
        # margin: a -b
    # LESS: sets 2 values
    # Sass: sets 1 value (a-b)
    # This wraps a and -b so they evaluates to 2 values in Sass
    def replace_calculation_semantics(file)
      # split_prop_val.call('(@navbar-padding-vertical / 2) -@navbar-padding-horizontal')
      # #=> ['(navbar-padding-vertical / 2)', '-navbar-padding-horizontal']
      split_prop_val = proc { |val|
        s         = CharStringScanner.new(val)
        r         = []
        buff      = ''
        d         = 0
        prop_char = %r([\$\w\-/\*\+%!])
        while (token = s.scan_next(/([\)\(]|\s+|#{prop_char}+)/))
          buff << token
          case token
            when '('
              d += 1
            when ')'
              d -= 1
              if d == 0
                r << buff
                buff = ''
              end
            when /\s/
              if d == 0 && !buff.strip.empty?
                r << buff
                buff = ''
              end
          end
        end
        r << buff unless buff.empty?
        r.map(&:strip)
      }
    
    namespace :bower do
    
      def text_url
    object.local? ? medium_url(object) : nil
  end
    
      private
    
      def index
    @follows = Follow.where(account: @account).recent.page(params[:page]).per(FOLLOW_PER_PAGE).preload(:target_account)
    
            def meta_assignment_node
          unless instance_variable_defined?(:@meta_assignment_node)
            @meta_assignment_node =
              operator_assignment_node || multiple_assignment_node
          end
    
            def_node_matcher :only_truthiness_matters?, <<-PATTERN
          ^({if while until case while_post until_post} equal?(%0) ...)
        PATTERN
    
            private
    
      context 'called with two styles' do
    it 'applies to alternating sides' do
      rule = 'border-style: dotted dashed'
    
      context 'called with multiple prefixes' do
    it 'applies the prefixes to the property' do
      rule = '-moz-appearance: none; ' +
             '-ms-appearance: none; ' +
             'appearance: none;'