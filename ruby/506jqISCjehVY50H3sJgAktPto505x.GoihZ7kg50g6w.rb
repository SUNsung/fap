
        
            brew cask install mactex
    EOS
  when 'pip' then <<-EOS.undent
    Homebrew provides pip via: `brew install python`. However you will then
    have two Pythons installed on your Mac, so alternatively you can install
    pip via the instructions at:
    
      # True if a {Formula} is being built without a specific option.
  # <pre>args << '--no-spam-plz' if build.without? 'spam'
  def without?(val)
    !with?(val)
  end
    
        def self.cleanup_lockfiles
      return unless HOMEBREW_CACHE_FORMULA.directory?
      candidates = HOMEBREW_CACHE_FORMULA.children
      lockfiles  = candidates.select { |f| f.file? && f.extname == '.brewing' }
      lockfiles.each do |file|
        next unless file.readable?
        file.open.flock(File::LOCK_EX | File::LOCK_NB) && file.unlink
      end
    end
    
      def xcode
    if instance_variable_defined?(:@xcode)
      @xcode
    elsif MacOS::Xcode.installed?
      @xcode = MacOS::Xcode.version
      @xcode += ' => #{MacOS::Xcode.prefix}' unless MacOS::Xcode.default_prefix?
      @xcode
    end
  end
    
        names = @@remote_tap_formulae['#{user}/#{repo}']
    user = user.downcase if user == 'Homebrew' # special handling for the Homebrew organization
    names.select { |name| rx === name }.map { |name| '#{user}/#{repo}/#{name}' }
  rescue GitHub::HTTPNotFoundError => e
    opoo 'Failed to search tap: #{user}/#{repo}. Please run `brew update`'
    []
  rescue GitHub::Error => e
    SEARCH_ERROR_QUEUE << e
    []
  end
    
        initial_revision = ENV['HOMEBREW_UPDATE_BEFORE'].to_s
    current_revision = ENV['HOMEBREW_UPDATE_AFTER'].to_s
    if initial_revision.empty? || current_revision.empty?
      odie 'update-report should not be called directly!'
    end
    
      # if rss_url already in existing opml file, use that; otherwise, do a lookup
  rss_url = nil
  existing_blog = xml.xpath('//outline[@htmlUrl='#{web_url}']').first if xml
  if existing_blog
    rss_url = existing_blog.attr('xmlUrl')
    puts '#{name}: ALREADY HAVE'
  end
    
            def responds?
          methods = @subject.instance_methods.map(&:to_s)
          methods.include?('#{@attachment_name}') &&
            methods.include?('#{@attachment_name}=') &&
            methods.include?('#{@attachment_name}?')
        end
    
            required = directories.map do |directory|
          pathname = File.expand_path(Rails.root.join(directory, filename))
          file_exists = File.exist?(pathname)
          require pathname if file_exists
          file_exists
        end
    
              new_source =
            node.receiver.source + ' =~ ' + node.first_argument.source
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks that there are no repeated conditions
      # used in case 'when' expressions.
      #
      # @example
      #
      #   # bad
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'first'
      #     do_something_else
      #   end
      #
      # @example
      #
      #   # good
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'second'
      #     do_something_else
      #   end
      class DuplicateCaseCondition < Cop
        MSG = 'Duplicate `when` condition detected.'.freeze
    
            def variables_in_simple_node(node)
          simple_double_comparison?(node) do |var1, var2|
            return [variable_name(var1), variable_name(var2)]
          end
          simple_comparison?(node) do |var|
            return [variable_name(var)]
          end
          []
        end
    
          expect('.border-width-implied-left').to have_rule(rule)
    end
  end
    
    describe 'buttons' do
  before(:all) do
    ParserSupport.parse_file('library/buttons')
    
          expect('.margin-false-third').to have_ruleset(ruleset)
      expect('.margin-false-third').to_not have_rule(bad_rule)
    end
  end
end

    
          expect('.padding-implied-left').to have_rule(rule)
    end
  end
    
      context 'called with null values' do
    it 'writes rules for others' do
      ruleset = 'position: static; ' +
                'top: 11px; ' +
                'left: 13px;'
      bad_rule = 'position-bottom: null; position-right: null;'