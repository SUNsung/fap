
        
            def initialize
      @entries = []
      @index = Set.new
      @types = Hash.new { |hash, key| hash[key] = Type.new key }
    end
    
        private
    
        self.base_url = 'http://localhost/'
    
            %w(modals dropdowns scrollspy tabs tooltips popovers alerts buttons collapse carousel affix).each do |dom_id|
          css('##{dom_id}-options + p + div tbody td:first-child').each do |node|
            name = node.content.strip
            id = node.parent['id'] = '#{dom_id}-#{name.parameterize}-option'
            name.prepend '#{dom_id.singularize.titleize}: '
            name << ' (option)'
            entries << [name, id]
          end
    
          def get_type
        case slug
        when 'api'
          'Reference'
        when 'configuration'
          'Reference: Configuration'
        when 'stpl'
          'Reference: SimpleTemplate'
        when 'plugindev'
          'Reference: Plugin'
        else
          'Manual'
        end
      end
    
    require 'cocoapods'
    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @short_output = argv.flag?('short')
          super
        end
    
      context 'called with four colors' do
    it 'applies different colors to all sides' do
      rule = 'border-color: #00f #0f0 #f00 #ff0'
    
          expect('.prefix').to have_ruleset(rule)
    end
  end
    
          expect('.all-text-inputs-active').to have_ruleset(ruleset)
    end
  end