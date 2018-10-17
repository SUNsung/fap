
        
              if path.symlink? || path.directory?
        next
      elsif path.extname == '.la'
        path.unlink
      else
        # Set permissions for executables and non-executables
        perms = if path.mach_o_executable? || path.text_executable?
          0555
        else
          0444
        end
        if ARGV.debug?
          old_perms = path.stat.mode & 0777
          if perms != old_perms
            puts 'Fixing #{path} permissions from #{old_perms.to_s(8)} to #{perms.to_s(8)}'
          end
        end
        path.chmod perms
      end
    end
  end
end

    
            $stderr.puts
        opoo out
        Homebrew.failed = true
        first_warning = false
      end
    end
    
      it 'pauses execution indefinitely if not given a duration' do
    running = false
    t = Thread.new do
      running = true
      sleep
      5
    end
    
        after do
      rm_r @tmp_file
    end
    
      # Under Phusion Passenger smart spawning, we need to reopen all IO streams
  # after workers have forked.
  #
  # The rolling file appender uses shared file locks to ensure that only one
  # process will roll the log file. Each process writing to the file must have
  # its own open file descriptor for `flock` to function properly. Reopening
  # the file descriptors after forking ensures that each worker has a unique
  # file descriptor.
  if defined? PhusionPassenger
    PhusionPassenger.on_event(:starting_worker_process) do |forked|
      Logging.reopen if forked
    end
  end
end
    
      class ShareVisibility < ApplicationRecord
  end
    
    Given /^a user with username '([^']*)' is connected with '([^']*)'$/ do |arg1, arg2|
  user1 = User.where(:username => arg1).first
  user2 = User.where(:username => arg2).first
  connect_users(user1, user1.aspects.where(:name => 'Besties').first, user2, user2.aspects.where(:name => 'Besties').first)
end
    
    # We have a ridiculously high wait time to account for build machines of various beefiness.
Capybara.default_max_wait_time = 30
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
    module Workers
  class PublishToHub < Base
    def perform(*_args)
      # don't publish to pubsubhubbub in cucumber
    end
  end
    
    describe LikesController, type: :controller do
  before do
    @alices_aspect = alice.aspects.where(:name => 'generic').first
    @bobs_aspect = bob.aspects.where(:name => 'generic').first
    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
        # Checks that the podfile exists.
    #
    # @raise  If the podfile does not exists.
    #
    # @return [void]
    #
    def verify_podfile_exists!
      unless config.podfile
        raise Informative, 'No `Podfile' found in the project directory.'
      end
    end
    
          def executable_path
        <<-EOS
### Installation Source
    
      include_examples 'multiline literal brace layout' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
    
      include_examples 'multiline literal brace layout' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
    let(:multi_prefix) { 'b: ' }
    let(:multi) do
      <<-RUBY.strip_indent.chomp
        [
        1
        ]
      RUBY
    end
  end
    
        context 'opening brace on same line as first element' do
      it 'allows closing brace on same line as last element' do
        expect_no_offenses(construct(false, false))
      end
    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end
    
          DOUBLE_SPLAT = '**'.freeze