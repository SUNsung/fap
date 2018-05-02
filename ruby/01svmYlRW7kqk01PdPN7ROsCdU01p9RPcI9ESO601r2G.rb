
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
      # True if a {Formula} is being built with {Formula.head} instead of {Formula.stable}.
  # <pre>args << '--some-new-stuff' if build.head?</pre>
  # <pre># If there are multiple conditional arguments use a block instead of lines.
  #  if build.head?
  #    args << '--i-want-pizza'
  #    args << '--and-a-cold-beer' if build.with? 'cold-beer'
  #  end</pre>
  def head?
    include? 'HEAD'
  end
    
        # Exclude cache, logs, and repository, if they are located under the prefix.
    [HOMEBREW_CACHE, HOMEBREW_LOGS, HOMEBREW_REPOSITORY].each do |dir|
      dirs.delete dir.relative_path_from(HOMEBREW_PREFIX).to_s
    end
    dirs.delete 'etc'
    dirs.delete 'var'
    
      def self.bottle_sha1(*)
  end
    
      def notification_setting_params
    allowed_fields = NotificationSetting::EMAIL_EVENTS.dup
    allowed_fields << :level
    params.require(:notification_setting).permit(allowed_fields)
  end
end

    
      private
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end
    
            private
    
              lambda do |corrector|
            corrector.replace(center.source_range, new_center)
          end
        end
      end
    end
  end
end

    
            def_node_matcher :on_body_of_reduce, <<-PATTERN
          (block (send _recv {:reduce :inject} !sym) _blockargs $(begin ...))
        PATTERN
    
            def_node_matcher :simple_double_comparison?, '(send $lvar :== $lvar)'
        def_node_matcher :simple_comparison?, <<-PATTERN
          {(send $lvar :== _)
           (send _ :== $lvar)}
        PATTERN
    
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