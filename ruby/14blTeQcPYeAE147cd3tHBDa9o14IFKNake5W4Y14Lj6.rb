
        
        def bottle_file_outdated?(f, file)
  filename = file.basename.to_s
  return unless f.bottle && filename.match(Pathname::BOTTLE_EXTNAME_RX)
    
      def cxxstdlib_check(check_type)
    self.class.cxxstdlib_check check_type
  end
    
          it 'splits correctly' do
        expected = ['One', 'Two', 'Three', 'Four Token']
        expect(generator.split_keywords(keywords)).to eq(expected)
      end
    end
    
          xcode_project = Xcodeproj::Project.open(@project_file_path)
      target = xcode_project.targets.find { |t| t.name == @target_name }
    
          it 'does set the source directory' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(source_directory: 'MyCoolApp')
          end').runner.execute(:test)
    
          it 'gets the correct version number for 'TargetBTests'' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_version_number(xcodeproj: '.xcproject', target: 'TargetBTests')
        end').runner.execute(:test)
        expect(result).to eq('5.4.3')
      end
    
          context('when the tag exists') do
        before do
          allow(Fastlane::Actions).to receive(:sh).with('git rev-parse -q --verify refs/tags/1.2.0 || true', { log: nil }).and_return('41215512353215321')
        end
    
    # A logger that delays messages until they're explicitly flushed to an inner
# logger.
#
# This can be installed around the current logger by calling \{#install!}, and
# the original logger can be replaced by calling \{#uninstall!}. The log
# messages can be flushed by calling \{#flush}.
class Sass::Logger::Delayed < Sass::Logger::Base
  # Installs a new delayed logger as the current Sass logger, wrapping the
  # original logger.
  #
  # This can be undone by calling \{#uninstall!}.
  #
  # @return [Sass::Logger::Delayed] The newly-created logger.
  def self.install!
    logger = Sass::Logger::Delayed.new(Sass.logger)
    Sass.logger = logger
    logger
  end
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
          def started?
        true
      end