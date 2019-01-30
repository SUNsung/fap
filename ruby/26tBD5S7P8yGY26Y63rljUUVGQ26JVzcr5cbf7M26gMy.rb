
        
              it 'allows to place name in any position' do
        format('%+15.5<foo>f', foo: 10.952).should == '      +10.95200'
        format('%+15<foo>.5f', foo: 10.952).should == '      +10.95200'
        format('%+<foo>15.5f', foo: 10.952).should == '      +10.95200'
        format('%<foo>+15.5f', foo: 10.952).should == '      +10.95200'
      end
    
      it 'returns true when passed ?R if the argument is readable by the real uid' do
    Kernel.test(?R, @file).should be_true
  end
    
        trace_var :$Kernel_trace_var_global, proc {|value| captured = value}
    
    describe 'main#define_method' do
  before :each do
    @code = 'define_method(:boom) { :bam }'
  end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
      def delete_target_file?
    return true if overwrite?
    puts('File #{target_file} exist, do you want to overwrite it? (Y/N)')
    ( 'y' == STDIN.gets.strip.downcase ? true : false)
  end
    
              it 'fails when installing a non logstash plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install  bundler')
            expect(command).not_to install_successfully
          end
    
    shared_examples 'logstash list' do |logstash|
  describe 'logstash-plugin list on #{logstash.hostname}' do
    before(:all) do
      logstash.install({:version => LOGSTASH_VERSION})
    end
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
      def self.source_root
    @source_root ||= File.expand_path('../templates', __FILE__)
  end
    
    # The base module that gets included in ActiveRecord::Base. See the
# documentation for Paperclip::ClassMethods for more useful information.
module Paperclip
  extend Helpers
  extend Logger
  extend ProcessorHelpers
    
        private