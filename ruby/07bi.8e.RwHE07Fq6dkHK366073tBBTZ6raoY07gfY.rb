
        
        # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
          # Add common options to a command for building configuration
      #
      # cmd - the Jekyll::Command to add these options to
      #
      # Returns nothing
      # rubocop:disable Metrics/MethodLength
      def add_build_options(cmd)
        cmd.option 'config', '--config CONFIG_FILE[,CONFIG_FILE2,...]',
                   Array, 'Custom configuration file'
        cmd.option 'destination', '-d', '--destination DESTINATION',
                   'The current folder will be generated into DESTINATION'
        cmd.option 'source', '-s', '--source SOURCE', 'Custom source directory'
        cmd.option 'future', '--future', 'Publishes posts with a future date'
        cmd.option 'limit_posts', '--limit_posts MAX_POSTS', Integer,
                   'Limits the number of posts to parse and publish'
        cmd.option 'watch', '-w', '--[no-]watch', 'Watch for changes and rebuild'
        cmd.option 'baseurl', '-b', '--baseurl URL',
                   'Serve the website from the given base URL'
        cmd.option 'force_polling', '--force_polling', 'Force watch to use polling'
        cmd.option 'lsi', '--lsi', 'Use LSI for improved related posts'
        cmd.option 'show_drafts', '-D', '--drafts', 'Render posts in the _drafts folder'
        cmd.option 'unpublished', '--unpublished',
                   'Render posts that were marked as unpublished'
        cmd.option 'quiet', '-q', '--quiet', 'Silence output.'
        cmd.option 'verbose', '-V', '--verbose', 'Print verbose output.'
        cmd.option 'incremental', '-I', '--incremental', 'Enable incremental rebuild.'
        cmd.option 'strict_front_matter', '--strict_front_matter',
                   'Fail if errors are present in front matter'
      end
      # rubocop:enable Metrics/MethodLength
    
            def deprecated_relative_permalinks(site)
          if site.config['relative_permalinks']
            Jekyll::Deprecator.deprecation_message 'Your site still uses relative permalinks,' \
                                                   ' which was removed in Jekyll v3.0.0.'
            true
          end
        end
    
              @new_body.each do |line|
            if !@livereload_added && line['<head']
              line.gsub!(HEAD_TAG_REGEX) do |match|
                %(#{match}#{template.result(binding)})
              end
    
          private
    
        To install Clojure you should install Leiningen:
      brew install leiningen
    and then follow the tutorial:
      https://github.com/technomancy/leiningen/blob/stable/doc/TUTORIAL.md
    EOS
  when 'osmium' then <<-EOS.undent
    The creator of Osmium requests that it not be packaged and that people
    use the GitHub master branch instead.
    EOS
  when 'gfortran' then <<-EOS.undent
    GNU Fortran is now provided as part of GCC, and can be installed with:
      brew install gcc
    EOS
  when 'play' then <<-EOS.undent
    Play 2.3 replaces the play command with activator:
      brew install typesafe-activator
    
    class Formula
  include FormulaCompat
  extend FormulaCompat
    
      # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)
    
        uses = formulae.select do |f|
      used_formulae.all? do |ff|
        begin
          deps = f.runtime_dependencies if only_installed_arg
          deps ||= if recursive
            recursive_includes(Dependency, f, includes, ignores)
          else
            reject_ignores(f.deps, ignores, includes)
          end