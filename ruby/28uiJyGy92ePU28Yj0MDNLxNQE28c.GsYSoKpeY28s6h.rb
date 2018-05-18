
        
            # Description formatted to work well as page title when viewing gist
    if f.core_formula?
      descr = '#{f.name} on #{OS_VERSION} - Homebrew build logs'
    else
      descr = '#{f.name} (#{f.full_name}) on #{OS_VERSION} - Homebrew build logs'
    end
    url = create_gist(files, descr)
    
        private
    
            def autocorrect(node)
          center = multiple_compare?(node)
          new_center = '#{center.source} && #{center.source}'
    
            def on_if(node)
          return unless nested_variable_comparison?(node.condition)
          add_offense(node)
        end
    
    RSpec.describe RuboCop::Cop::Style::StringMethods, :config do
  subject(:cop) { described_class.new(config) }