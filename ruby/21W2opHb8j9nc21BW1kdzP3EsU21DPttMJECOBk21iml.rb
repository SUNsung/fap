
        
              # This deletes the block with the given key if it exists.
      def delete(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$.*^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        @value.gsub!(regexp, '')
      end
    
    module VagrantPlugins
  module CommandBox
    module Command
      class Remove < Vagrant.plugin('2', :command)
        def execute
          options = {}
          options[:force] = false
    
      if Rails.env == 'development'
    test_conf = ActiveRecord::Base.configurations['test']
    
        HTTP.get(source).to_s.split('\n').each do |line|
      next if line.start_with? '#'
      parts = line.split(';').map(&:strip)
      next if parts.size < 2
      codes << [parts[0], parts[1].start_with?('fully-qualified')]
    end
    
    describe ApplicationController, type: :controller do
  controller do
    include UserTrackingConcern