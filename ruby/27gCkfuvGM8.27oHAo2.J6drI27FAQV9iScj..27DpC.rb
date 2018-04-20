
        
            # @deprecated Use <tt>git_author_email</tt> instead
    # Get the author email of the last git commit
    # <b>DEPRECATED:</b> Use <tt>git_author_email</tt> instead.
    def self.git_author
      UI.deprecated('`git_author` is deprecated. Please use `git_author_email` instead.')
      git_author_email
    end
    
          it 'does set the output directory' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(output_directory: '/tmp')
          end').runner.execute(:test)
    
            expect(result).to eq('git svn info | grep Revision | egrep -o '[0-9]+'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('git svn info | grep Revision | egrep -o '[0-9]+'')
      end
    end
    
          it 'increments the build number of the Xcode project' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
        @notification_setting = current_user.notification_settings_for(resource)
    @saved = @notification_setting.update_attributes(notification_setting_params)
    
      # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
        projects
  end
end

    
      module ClassMethods
    def load_types_in(module_name, my_name = module_name.singularize)
      const_set(:MODULE_NAME, module_name)
      const_set(:BASE_CLASS_NAME, my_name)
      const_set(:TYPES, Dir[Rails.root.join('app', 'models', module_name.underscore, '*.rb')].map { |path| module_name + '::' + File.basename(path, '.rb').camelize })
    end
    
        if options['recipients'].present?
      emails = options['recipients']
      emails = [emails] if emails.is_a?(String)
      unless emails.all? { |email| email =~ Devise.email_regexp || email =~ /\{/ }
        errors.add(:base, ''when provided, 'recipients' should be an email address or an array of email addresses')
      end
    end
  end
    }
    
    class Agents::ExampleAgent < Agent
  include LongRunnable
    
      included do
    helper SortableTableHelper
  end
    
      def destroy
    @event.destroy
    
        # Description formatted to work well as page title when viewing gist
    if f.core_formula?
      descr = '#{f.name} on #{OS_VERSION} - Homebrew build logs'
    else
      descr = '#{f.name} (#{f.full_name}) on #{OS_VERSION} - Homebrew build logs'
    end
    url = create_gist(files, descr)
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
          res = ''
      res << @before.to_sass(opts) if @before
      res << ' ' if @before && @whitespace_before
      res << '#{' unless @originally_text
      res << @mid.to_sass(opts)
      res << '}' unless @originally_text
      res << ' ' if @after && @whitespace_after
      res << @after.to_sass(opts) if @after
      res
    end
    
            tests.each do |test|
          target_module << '\n  target '#{test.name.gsub(/'/, '\\\\\'')}' do\n'
          target_module << '    inherit! :search_paths\n'
          target_module << template_contents(config.default_test_podfile_path, '    ', 'Pods for testing')
          target_module << '\n  end\n'
        end
    
            def meta_assignment_node
          unless instance_variable_defined?(:@meta_assignment_node)
            @meta_assignment_node =
              operator_assignment_node || multiple_assignment_node
          end
    
            def keyword_argument?
          %i[kwarg kwoptarg].include?(@declaration_node.type)
        end
    
    module RuboCop
  module Cop
    module Layout
      # Checks for unnecessary additional spaces inside array percent literals
      # (i.e. %i/%w).
      #
      # @example
      #
      #   # bad
      #   %w(foo  bar  baz)
      #   # good
      #   %i(foo bar baz)
      class SpaceInsideArrayPercentLiteral < Cop
        include MatchRange
        include PercentLiteral
    
            def autocorrect(node)
          # Regexp#match can take a second argument, but this cop doesn't
          # register an offense in that case
          return unless node.first_argument.regexp_type?
    
              lambda do |corrector|
            corrector.replace(center.source_range, new_center)
          end
        end
      end
    end
  end
end

    
    module RuboCop
  module Cop
    module Lint
      # Don't omit the accumulator when calling `next` in a `reduce` block.
      #
      # @example
      #
      #   # bad
      #
      #   result = (1..4).reduce(0) do |acc, i|
      #     next if i.odd?
      #     acc + i
      #   end
      #
      # @example
      #
      #   # good
      #
      #   result = (1..4).reduce(0) do |acc, i|
      #     next acc if i.odd?
      #     acc + i
      #   end
      class NextWithoutAccumulator < Cop
        MSG = 'Use `next` with an accumulator argument in a `reduce`.'.freeze
    
    module RuboCop
  module Cop
    module Style
      # This cop check for uses of Object#freeze on immutable objects.
      #
      # @example
      #   # bad
      #   CONST = 1.freeze
      #
      #   # good
      #   CONST = 1
      class RedundantFreeze < Cop
        include FrozenStringLiteral
    
            # Return the plain source code without annotations
        #
        # @return [String]
        def plain_source
          lines.join
        end