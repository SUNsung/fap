
        
            # Get the hash of the last commit
    def self.last_git_commit_hash(short)
      format_specifier = short ? '%h' : '%H'
      string = last_git_commit_formatted_with(format_specifier).to_s
      return string unless string.empty?
      return nil
    end
    
          it 'pass a custom build number to the tool' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: 24, xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
        # convert recursively evaluated selector $list to @for loop
    def mixin_all_grid_columns(css, selector: raise('pass class'), from: 1, to: raise('pass to'))
      mxn_def = css.each_line.first.strip
      # inject local variables as default arguments
      # this is to avoid overwriting outer variables with the same name with Sass <= 3.3
      # see also: https://github.com/twbs/bootstrap-sass/issues/636
      locals = <<-SASS.strip
        $i: #{from}, $list: '#{selector}'
      SASS
      mxn_def.sub!(/(\(?)(\)\s*\{)/) {  '#{$1}#{', ' if $1.empty?}#{locals}#{$2}' }
      step_body = (css =~ /\$list \{\n(.*?)\n[ ]*\}/m) && $1
<<-SASS
// [converter] This is defined recursively in LESS, but Sass supports real loops
#{mxn_def}
  @for $i from (#{from} + 1) through #{to} {
    $list: '\#{$list}, #{selector}';
  }
  \#{$list} {
#{unindent step_body, 2}
  }
}
SASS
    end
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
            def multiple_assignment_node
          grandparent_node = node.parent ? node.parent.parent : nil
          return nil unless grandparent_node
          return nil unless grandparent_node.type == MULTIPLE_ASSIGNMENT_TYPE
          return nil unless node.parent.type == MULTIPLE_LEFT_HAND_SIDE_TYPE
          grandparent_node
        end
      end
    end
  end
end

    
            def on_percent_literal(node)
          each_unnecessary_space_match(node) do |range|
            add_offense(node, location: range)
          end
        end
    
            def repeated_condition?(previous, condition)
          previous.any? { |c| c.include?(condition) }
        end
      end
    end
  end
end

    
      let(:source) { ''something'.intern' }
  let(:corrected) { autocorrect_source(source) }