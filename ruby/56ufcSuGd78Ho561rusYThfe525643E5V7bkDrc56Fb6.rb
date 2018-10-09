
        
        module Fastlane
  # Handles receiving commands from the socket server, finding the Action to be invoked,
  # invoking it, and returning any return values
  class SocketServerActionCommandExecutor < CommandExecutor
    attr_accessor :runner
    attr_accessor :actions_requiring_special_handling
    
            expect(result).to eq('carthage bootstrap --platform tvOS')
      end
    
          context 'when specify quiet option' do
        it 'adds quiet option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              quiet: true
            )
          end').runner.execute(:test)
    
      def empty?
    @paths.empty?
  end
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end