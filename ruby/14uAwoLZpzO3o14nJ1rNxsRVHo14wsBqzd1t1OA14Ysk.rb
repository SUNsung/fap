
        
            We recommend using a MacTeX distribution: https://www.tug.org/mactex/
    
            if file_is_stale || ARGV.switch?('s') && !f.installed? || bottle_file_outdated?(f, file)
          cleanup_path(file) { file.unlink }
        end
      end
    end
    
        if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
      def filtered_list
    names = if ARGV.named.empty?
      Formula.racks
    else
      ARGV.named.map { |n| HOMEBREW_CELLAR+n }.select(&:exist?)
    end
    if ARGV.include? '--pinned'
      pinned_versions = {}
      names.each do |d|
        keg_pin = (HOMEBREW_LIBRARY/'PinnedKegs'/d.basename.to_s)
        if keg_pin.exist? || keg_pin.symlink?
          pinned_versions[d] = keg_pin.readlink.basename.to_s
        end
      end
      pinned_versions.each do |d, version|
        puts '#{d.basename}'.concat(ARGV.include?('--versions') ? ' #{version}' : '')
      end
    else # --versions without --pinned
      names.each do |d|
        versions = d.subdirs.map { |pn| pn.basename.to_s }
        next if ARGV.include?('--multiple') && versions.length < 2
        puts '#{d.basename} #{versions*' '}'
      end
    end
  end
end
    
        if $stdout.tty?
      metacharacters = %w[\\ | ( ) [ ] { } ^ $ * + ? .]
      bad_regex = metacharacters.any? do |char|
        ARGV.any? do |arg|
          arg.include?(char) && !arg.start_with?('/')
        end
      end
      if ARGV.any? && bad_regex
        ohai 'Did you mean to perform a regular expression search?'
        ohai 'Surround your query with /slashes/ to search by regex.'
      end
    end
    
    html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
    def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
    
#
# Set implements a collection of unordered values with no duplicates.
# This is a hybrid of Array's intuitive inter-operation facilities and
# Hash's fast lookup.
#
# Set is easy to use with Enumerable objects (implementing +each+).
# Most of the initializer methods and binary operators accept generic
# Enumerable objects besides sets and arrays.  An Enumerable object
# can be converted to Set using the +to_set+ method.
#
# Set uses Hash as storage, so you must note the following points:
#
# * Equality of elements is determined according to Object#eql? and
#   Object#hash.  Use Set#compare_by_identity to make a set compare
#   its elements by their identity.
# * Set assumes that the identity of each element does not change
#   while it is stored.  Modifying an element of a set will render the
#   set to an unreliable state.
# * When a string is to be stored, a frozen copy of the string is
#   stored instead unless the original string is already frozen.
#
# == Comparison
#
# The comparison operators <, >, <=, and >= are implemented as
# shorthand for the {proper_,}{subset?,superset?} methods.  However,
# the <=> operator is intentionally left out because not every pair of
# sets is comparable ({x, y} vs. {x, z} for example).
#
# == Example
#
#   require 'set'
#   s1 = Set[1, 2]                        #=> #<Set: {1, 2}>
#   s2 = [1, 2].to_set                    #=> #<Set: {1, 2}>
#   s1 == s2                              #=> true
#   s1.add('foo')                         #=> #<Set: {1, 2, 'foo'}>
#   s1.merge([2, 6])                      #=> #<Set: {1, 2, 'foo', 6}>
#   s1.subset?(s2)                        #=> false
#   s2.subset?(s1)                        #=> true
#
# == Contact
#
#   - Akinori MUSHA <knu@iDaemons.org> (current maintainer)
#
class Set
  include Enumerable
    
      def test_label_syntax
    return unless @cls == Hash
    
      it 'ignores NULL bytes between directives' do
    '333333\x07@ffffff\xf6?'.unpack(unpack_format('\000', 2)).should == [2.9, 1.4]
  end
    
      it 'does not set $!' do
    thread = ThreadSpecs.dying_thread_ensures(@method) { ScratchPad.record $! }
    thread.join
    ScratchPad.recorded.should == nil
  end
    
    if $opt_test
  exit test_app($opt_test)
else
  report_apps
end

    
          # bootstrap requires minimum precision of 8, see https://github.com/twbs/bootstrap-sass/issues/409
      ::Sass::Script::Number.precision = [8, ::Sass::Script::Number.precision].max
    end
    
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
    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
      # Generate digests for assets URLs.
  config.assets.digest = true
    
    load './tasks/bower.rake'
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
            def operator_assignment_node
          return nil unless node.parent
          return nil unless OPERATOR_ASSIGNMENT_TYPES.include?(node.parent.type)
          return nil unless node.sibling_index.zero?
          node.parent
        end
    
              @name = name.to_sym
          @declaration_node = declaration_node
          @scope = scope
    
              FROZEN_STRING_LITERAL_TYPES.include?(node.type) &&
            frozen_string_literals_enabled?
        end
      end
    end
  end
end
